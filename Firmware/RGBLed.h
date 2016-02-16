#ifndef RGBLED_H
#define RGBLED_H

#include "Pins.h"
#include <Arduino.h>

class RGBLed
{
	public:
		RGBLed(int redPin, int greenPin, int bluePin);
		void setRGB(int R, int G, int B);             
		void turnOff();  
	private:
		const int rPin,gPin,bPin;
};
#endif //__RGBLED_H
