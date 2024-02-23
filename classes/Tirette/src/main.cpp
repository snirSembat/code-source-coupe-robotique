#include <Arduino.h>
#include "Tirette.hpp"

int pin = 2;
Tirette tirette(pin);

void setup(){
  Serial.begin(9600);
}

void loop(){
  if (tirette.estEnPlace()){
    Serial.print("marche");
  }

  else if (tirette.estRetiree()) {
    Serial.print("retire");
  }
}