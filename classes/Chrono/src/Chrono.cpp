#include <Arduino.h>
#include "Chrono.hpp"

unsigned long Chrono::tempsInitial = 0;
unsigned long Chrono::tempsRestant = 0;
bool chronoTourne = false;


Chrono::Chrono(){

}

void Chrono::start()const{
    if(chronoTourne == false){
        tempsInitial = millis();
        chronoTourne = true;
    }
    
}

void Chrono::stop(){

    chronoTourne = false;

}

void Chrono::reset(){

    tempsInitial = millis();

}

unsigned long Chrono::getTempsEcoule()const{
    if(chronoTourne == true){
        if(millis() - tempsInitial > 100000){
            return 100000;
        }
        else{
            return millis() - tempsInitial;
        }
    }
    else{
        return 0;
    }

}

unsigned long Chrono::getTempsRestant()const{
    if(chronoTourne == true){
        tempsRestant = 100000 - getTempsEcoule();
        if(tempsRestant > 100000){
            return 0;
        }
        else{
            return tempsRestant;
        }
    }
    else{
        return 0;
    }

}

void Chrono::veriFinMatch()const{
    if((getTempsEcoule() >= 100000)){
        while(true){
            delay(1);
        }
    }

}