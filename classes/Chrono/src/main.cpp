#include <Arduino.h>
#include "Chrono.hpp"

Chrono timer;
unsigned long temps1;
unsigned long temps2;

void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT);
    pinMode(4, INPUT);
    pinMode(6, INPUT);
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