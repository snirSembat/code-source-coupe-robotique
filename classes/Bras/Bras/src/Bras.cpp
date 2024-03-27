#include <Arduino.h>
#include <Bras.hpp>
#include <Servo.h>
 

    Bras::Bras (): angleRentrer(0),angleSortie(90) {

        
    
    }
    void Bras::broche(int brocheBras){

        servoMoteur.attach(brocheBras);
        servoMoteur.write(0);
    
    }
    void Bras::rentrer(int angleRentrer){
                

        servoMoteur.write(angleRentrer);

    }
    void Bras::sortir(int angleSortie){
                

        servoMoteur.write(angleSortie);

    }   
    