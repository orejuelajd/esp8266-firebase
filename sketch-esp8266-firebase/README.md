Preparando el esp8266
==================
Cabe resaltar que para este proyecto el módulo esp se utilizó como un arduino y no como un módulo propiamente, lo que quiere decir que el módulo se programa con el IDE de arduino.

## Conexiones electrónicas para programar esp8266 con arduino IDE

El ESP8266 se conoce normalmente como un módulo para Arduino que funciona para darle conectividad a nuestro Arduino con redes WiFi. Pero el ESP8266 también puede funcionar como un microcontrolador, con un procesador que funciona con frecuencias de hasta 80Mhz (el doble de rápido que algunas placas Arduino). A continuación se mostrará la conexión que hay entre un convertidor USB TTL – Serial al ESP8266 para programarlo desde el IDE de Arduino y sin necesidad de tener una placa Arduino.

![Conexiones entre esp8266 y convertidor usb-serial](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/01.png)

## Conexiones electrónicas para este proyecto

![Conexiones entre esp8266 y convertidor usb-serial](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/sketch-esp8266-firebase/connections/connections.png)

**IMPORTANTE:** Conectar el GPIO0 a GND solo para reprogramar el firmware del esp8266 (cuando le vaya a subir algun skecth). Cuando ya este subido el skecth en el ESP8266 y funcione, se debe desconectar de la fuente de alimentación (desconectar el USB del convertidor) y volverlo a conectar para encender de nuevo el ESP8266 pero con el GPIO0 desconectado de GND, ya que si se vuelve a encender y el GPIO0 sigue conectado a GND, el skecth se borra del ESP8266, ya que el módulo se reinicia nuevamente.

## Configurando el IDE de arduino

* Instalar el paquete de las tarjetas esp8266: Ingresar http://arduino.esp8266.com/stable/package_esp8266com_index.json en el campo Additional Board Manager URLs en las preferencias del IDE de Arduino.

![Instalar el paquete de las tarjetas esp8266](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/02.png)

* Siguiente, usar el gestor de tarjetas (Board Manager) para instalar el paquetes ESP8266

![Usar el gestor de tarjetas (Board Manager) para instalar el paquetes ESP8266](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/03.png)

* Configurar en el IDE la placa ESP8266, Para este caso es "Generic ESP8266 Module"

![Configurar en el IDE la placa ESP8266](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/04.png)

* Ajustar 80 MHz como la frecuencia de la CPU

![Ajustar 80 MHz como la frecuencia de la CPU](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/05.png)

* 115200 baud como la velocidad de subida

![115200 baud como la velocidad de subida](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/06.png)

* Seleccionar el puerto COM para tu FTDI ó Cable USB-serial

![Seleccionar el puerto COM para tu FTDI ó Cable USB-serial](https://raw.githubusercontent.com/orejuelajd/esp8266-firebase/master/general-resources/07.png)

Ya con estos pasos el ESP8266 esta listo para que por medio del convertidor serial-usb se le puedan subir skecth desde el ide arduino (¡Como programar un arduino cualquiera!) :D

## Ajustando el sketch de arduino

 En este skecth debes cambiar básicamente 4 parametros:

* **FIREBASE_HOST** "nombredetuproyecto.firebaseio.com"
* **FIREBASE_AUTH** "llave-o-secreto-del-proyecto"
* **WIFI_SSID** "nombre-de-la-red-wifi"
* **WIFI_PASSWORD** "password-de-la-red-wifi"

**Nota:** Para obtener la llave o secreto del proyecto realizar los siguientes pasos (Esto se hizo para la versión de consola de firebase del año 2016, tal vez en un futuro sea cambiada la interfaz y los pasos no sean los mismos):

* Click en el piñon o rueda de configuración
* Click en configuración del proyecto
* Click en la pestaña base de datos
