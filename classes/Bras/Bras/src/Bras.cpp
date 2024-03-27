#include <Arduino.h>
#include <Bras.hpp>
#include <Servo.h>
 

Bras::Bras (int brocheBras)
    :angleRentrer(0),angleSortie(90),brocheBras(brocheBras) {
    
}

void Bras::begin(){

    servoMoteur.attach(brocheBras);
    servoMoteur.write(0);

}
void Bras::configAngle(int angleRentrer,int angleSortie){

}
void Bras::rentrer(){
            
    servoMoteur.write(angleRentrer);

}
void Bras::sortir(){

    servoMoteur.write(angleSortie);

}   
