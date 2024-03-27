#include <Arduino.h>
#include <Bras.hpp>
#include <Servo.h>

Bras bras(4);

void setup() {
	bras.begin();
	bras.configAngle(0,90);
	
}

void loop() {

	bras.rentrer();
	delay(1000);
	bras.sortir();
	delay(1000);
}






