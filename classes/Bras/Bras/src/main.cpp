#include <Arduino.h>
#include <Bras.hpp>
#include <Servo.h>

Bras bras;

void setup() {
	bras.broche(4);	
	
}

void loop() {

	bras.rentrer(0);
	delay(1000);
	bras.sortir(90);
	delay(1000);
}






