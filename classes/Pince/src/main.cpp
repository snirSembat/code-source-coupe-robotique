#include <Arduino.h>
#include <Pince.hpp>

#include <Servo.h>

Pince maPince(3,4,5,6);


void setup() {
  maPince.begin();
  Serial.begin(9600);

}
void loop() {
  maPince.ouvrir();
  delay(1000);
  maPince.fermer();
  delay(1000);
}