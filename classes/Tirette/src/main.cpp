#include <Arduino.h>
#include "Tirette.hpp"

int pin = 3;
Tirette tirette(pin);


void setup(){
  Serial.begin(9600);
 
}

void loop(){

    if (tirette.estEnPlace()) {
      Serial.println("Tirette en place");
      delay(1000);
      }
    else if (tirette.estRetiree()){
      Serial.println("Tirette retiree");
      delay(1000);
    }
}
  

