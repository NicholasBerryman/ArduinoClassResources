# Learning Resources for Arduino
The Arduino development platform utilises a flavour of the C++ programming language with some variations specific to the platform. As such any general C++ syntax (e.g. variable declaration, if-else, while loops, etc.) will also work with Arduino, although many native C++ functions and classes/objects (e.g. cin, cout, printf, scanf) will not work.  
  
There are countless C++ tutorials in website, video and book form that may be used to gain the C++ background necessary for Arduino programming. Some good examples are:
* https://www.udemy.com/free-learn-c-tutorial-beginners/ (Online lectures, up to subroutines at least) - Probably one of the best online resources
* C++ For Everyone (Book) - https://www.amazon.com/C-Everyone-Cay-S-Horstmann/dp/0470927135 (Particularly good for developing good programming practices)
* https://www.learn-cpp.org/ (Everything in the 'Learn the Basics' section)
* http://cs.slu.edu/~goldwamh/publications/python2cpp.pdf (For those already familiar with programming in Python)  
  
The Arduino website also contains a reference sheet for all Arduino-specific programming information, though it may not make much sense until you are generally familiar with C++. This can be found at: https://www.arduino.cc/reference/en/  
Like with general C++ there are several Arduino tutorials online, but once you're familiar with C++, the best way to learn is probably through trying out some projects such as those found at https://www.instructables.com/id/Arduino-Projects/  
* *Note:* Many of the coolest and/or most useful projects are also the most difficult so it's probably best to start with a few boring, simple projects before moving on to these harder projects.  



# Wireless Communications with Arduino
One very powerful aspect of the Arduino is the ability to use it to communicate wirelessly between end devices. For Example, it may be used with a controller to make an RC robot, or it may be used to remotely transmit sensor data long distances to a central location, etc.

### Common Methods:
* Infrared (IR)
  * Cheap
  * Unidirectional
  * Cannot pass walls
  * Short range
  * See: http://www.circuitbasics.com/arduino-ir-remote-receiver-tutorial/
* Bluetooth
  * Still fairly cheap
  * Bidirectional
  * Short range
  * See: https://www.altronics.com.au/p/z6365-funduino-bluetooth-4.0-module/ And https://www.hackster.io/achindra/bluetooth-le-using-cc-41a-hm-10-clone-d8708e
* Wi-Fi
  * Bidirectional
  * Can be long range if internet connection is available
  * See: https://www.altronics.com.au/p/z6350-funduino-wifi-ethernet-cc3000-shield/ And https://learn.sparkfun.com/tutorials/pushing-data-to-datasparkfuncom/arduino--cc3000-shield
* Low-bandwidth radio (XBee)
  * Bidirectional
  * Very long range
  * See: https://www.littlebird.com.au/xbee-1mw-wire-antenna-series-1-802-15-4 And https://www.littlebird.com.au/xbee-usb-adapter-v2-atmega8u2 And https://www.norwegiancreations.com/2013/10/arduino-tutorial-1-lets-make-xbee-talk/
