Conectando esp8266 con firebase
================
Proyecto para conectar un esp8266 a firebase para el primer meetup de ingeniería multimedia de la Universidad Autónoma de Occidente.

## Objetivos:

* Crear una base de datos en firebase.
* Enviar datos desde esp8266 a la base de datos en firebase. 
* Los datos enviados por esp8266 a firebase serán visualizados en una página en HTML5.
* Presionar un botón en la pagina HTML para apagar o encender un led conectado al pin GPIO2 del esp8266. 

## Preparando la base de datos (Firebase)

**1)** Se debe crear el proyecto desde la consola de firebase en https://console.firebase.google.com/. Para este caso, el nombre del proyecto es example, por lo tanto la URL del proyecto es https://example.firebaseio.com/

**2)** Ya creado el repositorio, se deben cambiar los permisos para que cualquier persona pueda enviar datos a la database de firebase. En la consola del proyecto se debe ir a reglas y cambiar dichas reglas a las siguientes (conservando el formato JSON). Esto se hace ya que es solo una prueba pero se debe tener precaución pues estamos quitando cualquier seguridad:

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

## Fuentes:

* Repositorio sobre esp8266: https://github.com/esp8266/Arduino/blob/master/doc/reference.md#digital-io

Connecting esp8266 to firebase
================
Project in which we send data from a esp8266 to a database in firebase.

## Objetives:

* Create a database in firebase.
* Send data form esp8266 to database in firebase.
* The data sent by esp8266 to firebase will be visualized in a HTML5 page.
* Push a button in the HTML5 page to switch on or switch off a led connected to esp8266 GPIO2 pin.

## Preparing database (Firebase)

**1)** We need create the new project from firebase console (https://console.firebase.google.com/). In this case, the project name is "example", then the url project is https://example.firebaseio.com/

**2)** With the project created,  we should change the permissions to any person can send data to firebase database (In this case this a test and the security doesn't matter). In the project console we should go to "rules" and change this rules to this (Keep the json format):

`{
  "rules": {
    ".read": true,
    ".write": true
  }
}`

## Sources:

* Repository about esp8266: https://github.com/esp8266/Arduino/blob/master/doc/reference.md#digital-io