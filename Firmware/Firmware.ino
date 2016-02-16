#include "Global.h"



void setup() {
  Serial.begin(9600);
  Serial.println("start");
}


void loop() {
  {
    if (pir.read())
    {
      Serial.println("PIR detecting");
      rgbLed.setRGB(255, 0, 0);
      delay(500);
      rgbLed.setRGB(0, 255, 0);
      delay(500);
      rgbLed.setRGB(0, 0, 255);
      delay(1000); //delay time for the pir to stabilize.
    }

    delay(20);
  }

}

