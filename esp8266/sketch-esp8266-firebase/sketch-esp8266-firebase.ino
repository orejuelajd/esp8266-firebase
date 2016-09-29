#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Configure this parameters to run the sketch
#define FIREBASE_HOST "urldatabase.firebaseio.com"
#define FIREBASE_AUTH "token_or_secret"
#define WIFI_SSID "WiFi_name"
#define WIFI_PASSWORD "WiFi_password"
#define pinLed 2

void setup() {

  // Initialize the Serial
  Serial.begin(9600);

  // Adjust pinLed as output pin
  pinMode(pinLed, OUTPUT);

  // Connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  // Connect to firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;
boolean statusLed = false;

void loop() {

  // get led status
  statusLed = Firebase.getBool("statusLed");
  if(statusLed){
    digitalWrite(pinLed, HIGH); // turn on the led
  }else{
    digitalWrite(pinLed, LOW); // turn off the led
  }
  delay(1000);

  // set value
  Firebase.setFloat("number", 42.0);
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);
  
  // update value
  Firebase.setFloat("number", 43.0);
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);

  // get value 
  Serial.print("number: ");
  Serial.println(Firebase.getFloat("number"));

  // remove value
  Firebase.remove("number");
  delay(1000);

  // set string value
  Firebase.setString("message", "hello world");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /message failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);
  
  // set bool value
  Firebase.setBool("truth", false);
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /truth failed:");
      Serial.println(Firebase.error());  
      return;
  }
  delay(1000);

  // append a new value to /logs
  String name = Firebase.pushInt("logs", n++);
  // handle error
  if (Firebase.failed()) {
      Serial.print("pushing /logs failed:");
      Serial.println(Firebase.error());  
      return;
  }
  Serial.print("pushed: /logs/");
  Serial.println(name);
  delay(1000);
}
