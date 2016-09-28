esp8266-firebase
==================
Proyecto en el cual se envian datos desde un esp8266 a una base de datos en firebase.

PROGRAMAR ESP-8266 con el IDE de arduino
========================================

Cabe resaltar que para este proyecto el módulo esp se utilizó como un arduino y no como un módulo propiamente, lo que quiere decir que el módulo se programa con el IDE de arduino.

## Conexiones

El ESP8266 se conoce normalmente como un módulo para Arduino que funciona para darle conectividad a nuestro Arduino con redes WiFi. Pero el ESP8266 también puede funcionar como un microcontrolador, con un procesador que funciona con frecuencias de hasta 80Mhz (el doble de rápido que algunas placas Arduino). A continuación se mostrará la conexión que hay entre un convertidor USB TTL – Serial al ESP8266 para programarlo desde el IDE de Arduino y sin necesidad de tener una placa Arduino.

![Conexiones entre esp8266 y convertidor usb-serial](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/01.png?token=426da4092c0d405e7dee06271315748fa68b6d6c)

**IMPORTANTE:** Conectar el GPIO0 a GND solo para reprogramar el firmware del esp8266 (cuando le vaya a subir algun skecth). Cuando ya este subido el skecth en el ESP8266 y funcione, se debe desconectar de la fuente de alimentación (desconectar el USB del convertidor) y volverlo a conectar para encender de nuevo el ESP8266 pero con el GPIO0 desconectado de GND, ya que si se vuelve a encender y el GPIO0 sigue conectado a GND, el skecth se borra del ESP8266, ya que el módulo se reinicia nuevamente.

## Configurar el IDE de arduino

* Instalar el paquete de las tarjetas esp8266: Ingresar http://arduino.esp8266.com/stable/package_esp8266com_index.json en el campo Additional Board Manager URLs en las preferencias del IDE de Arduino.

![Instalar el paquete de las tarjetas esp8266](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/02.png?token=90c5c6f86968830da935db4a210fc8c8f40b5917)

* Siguiente, usar el gestor de tarjetas (Board Manager) para instalar el paquetes ESP8266

![Usar el gestor de tarjetas (Board Manager) para instalar el paquetes ESP8266](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/03.png?token=74db49a8661e140edd83d53499eb96ff80aed318)

* Configurar en el IDE la placa ESP8266, Para este caso es "Generic ESP8266 Module"

![Configurar en el IDE la placa ESP8266](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/04.png?token=a1f28a7f608f0d8847f09a175cc4bad3bed5fca9)

* Ajustar 80 MHz como la frecuencia de la CPU

![Ajustar 80 MHz como la frecuencia de la CPU](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/05.png?token=17af2577a9ffc160fed836fb20db3d24472cadc0)

* 115200 baud como la velocidad de subida

![115200 baud como la velocidad de subida](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/06.png?token=c83482dd524ae0bf6561b3fa2dfcb5b440f29106)

* Seleccionar el puerto COM para tu FTDI ó Cable USB-serial

![Seleccionar el puerto COM para tu FTDI ó Cable USB-serial](https://bytebucket.org/orejuelajd/elias-expin-repo/raw/b524d8c7ea74f82a9a610fa33f948fce2b7015cb/sistema-movimiento/programacion-esp8266/archivos/07.png?token=175f2562de60356d46b49b9c68347ee478b3266b)

# Ya con estos pasos, el ESP8266 esta listo para que por medio del convertidor serial-usb se le puedan subir skecth desde el ide arduino (¡Como programar un arduino cualquiera!) :D
