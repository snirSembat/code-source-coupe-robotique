#include <Arduino.h>
#include <Bras.hpp>
#include <Servo.h>

Bras bras(4);

void setup() {
	bras.begin();	
	
}

void loop() {

	bras.rentrer(0);
	delay(1000);
	bras.sortir(90);
	delay(1000);
}






