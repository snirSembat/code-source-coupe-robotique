#include <Arduino.h>
#include "Chrono.hpp"

int Chrono::tempsInitial = 0;
int Chrono::tempsRestant = 0;
int tempsEcoule = 0;
int tempsPause = 0;
int tempsReprise = 0;
bool chronoTourne = false;
bool demarrage = false;


Chrono::Chrono(){

}

void Chrono::start()const{

    if(demarrage == false){
        demarrage = true;
        tempsInitial = millis();
    }
    if(chronoTourne == false){
        tempsReprise = millis();
        tempsInitial = tempsInitial + (tempsReprise - tempsPause);
        chronoTourne = true;
        tempsPause = 0;
        tempsReprise = 0;
    }
    
}

void Chrono::stop(){

    chronoTourne = false;
    tempsPause = millis();

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

    tempsEcoule = millis() - tempsInitial;
    return tempsEcoule;

}

int Chrono::getTempsRestant()const{

    tempsRestant = 100000 - Chrono::getTempsEcoule();
    return tempsRestant;

}

void Chrono::veriFinMatch()const{

    if(Chrono::getTempsRestant() <= 0){
        while(true){
            delay(1);
        }
    }

}