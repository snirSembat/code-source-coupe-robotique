#include <Arduino.h>
#include "Tirette.hpp"

int pin = 3;
Tirette tirette(pin);


void setup(){
  Serial.begin(9600);
  pinMode (3, INPUT_PULLUP);
}

void loop(){
  if (tirette.estEnPlace()){
    Serial.print("marche");
    delay(10000);
  }

  else if (tirette.estRetiree()) {
    Serial.print("retire");
    delay(10000);
  }
}
