#include <Arduino.h>
#include "Chrono.hpp"

Chrono timer;
int temps1;
int temps2;

void setup() {
    Serial.begin(9600);
}

void loop() {
    if(digitalRead(3) == 0){
        timer.start();
    }
    if(digitalRead(5) == 0){
        timer.stop();
    }
    if(digitalRead(7) == 0){
        timer.reset();
    }
    delay(1000);
    temps1 = timer.getTempsEcoule();
    temps2 = timer.getTempsRestant();
    Serial.println("Temps écoulé:");
    Serial.println(temps1);
    Serial.println("Temps restant:");
    Serial.println(temps2);
    timer.veriFinMatch();
}