# SI1145_Test
The SI1145 is a UV light sensing module, AdaFruit produce a version with a library and instruction for the Arduino.
We wanted to use this with the Photon, 
Tests the SI1145 UV Sensor with the Photon, using the Adafruit_SI1145 Library

The code contains a simple program which attemps to read the SI1145 UV data using the AdaFruit library.
The Library is a copy of the Arduino verison, simply adding the #include "Application.h"

Creating the Adafruit_SI1145 object does not cause a problem
  i.e. Adafruit_SI1145 uv = Adafruit_SI1145();
  
  The first problem occurs when trying to read from the object, for example simply calling readVisible causes an SOS error.
  The blink code appears to be 5, which is Usage Fault.
  
  The only other modification we made to the library is adding the setSpeed in Adafruit_SI1145.cpp before the Wire.begin()
  i.e.   Wire.setSpeed(CLOCK_SPEED_100KHZ);
  This appears to make no difference.
