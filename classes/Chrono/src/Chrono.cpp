#include <Arduino.h>
#include "Chrono.hpp"

int Chrono::tempsInitial = 0;
int Chrono::tempsRestant = 0;
int tempsEcoule = 0;
bool chronoTourne = false;
bool demarrage = false;


Chrono::Chrono(){

}

void Chrono::start()const{

    if(demarrage == false){
        demarrage = true;
        tempsInitial = millis();
    }

    chronoTourne = true;

}

void Chrono::stop(){

    chronoTourne = false;

}

void Chrono::reset(){

    if(chronoTourne == false){
        demarrage = false;
    }

    else{
        tempsInitial = millis();
    }

}

int Chrono::getTempsEcoule()const{

    return millis() - tempsInitial;

}

int Chrono::getTempsRestant()const{

    tempsRestant = 100000 - tempsInitial;

    return tempsRestant;

}

void Chrono::veriFinMatch()const{

    

}