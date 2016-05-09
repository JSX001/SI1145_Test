// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_SI1145.h"


Adafruit_SI1145 uv = Adafruit_SI1145();

void setup() 
{

  if (! uv.begin()) {
    Serial.println("Didn't find Si1145");
    while (1);
  }
    Serial.begin(9600);
}

void loop() 
{
    // next line crashes with SOS
    uv.readVisible();
    
    Serial.println("===================");
    
    
//  Serial.print("Vis: "); Serial.println(uv.readVisible());
//  Serial.print("IR: "); Serial.println(uv.readIR());

/*
  float UVindex = uv.readUV();
  // the index is multiplied by 100 so to get the
  // integer index, divide by 100!
    UVindex /= 100.0;  
  Serial.print("UV: ");  Serial.println(UVindex);
*/

  delay(750);

}
