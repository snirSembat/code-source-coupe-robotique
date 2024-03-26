#include <Arduino.h>
#include "Chrono.hpp"

unsigned long Chrono::tempsInitial = 0;
unsigned long Chrono::tempsRestant = 100;
unsigned long tempsP = 0;
int tempsE = 0;
int tempsR = 100;
bool pause = false;
bool demarage = false;

Chrono::Chrono(){

}

void Chrono::start()const{

    if(demarage == false){
        tempsInitial = millis();
        demarage = true;
    }
    if(pause == true){
        pause = false;
        tempsInitial = tempsInitial + (millis() - tempsP);
        tempsP = 0;
    }

}

void Chrono::stop(){

    tempsP = millis();
    tempsE = getTempsEcoule();
    tempsR = getTempsRestant();
    pause = true;

}

void Chrono::reset(){

    demarage = false;
    if(pause == true){
        pause = false;
        tempsE = 0;
        tempsR = 100;
    }
    else{
        start();
    }

}

unsigned long Chrono::getTempsEcoule()const{

    if((pause == false) and (demarage == true)){
        if(tempsE > 100){
            return 100;
        }
        else{
            return (millis() - tempsInitial)/1000;
        }
    }
    else{
        return tempsE;
    }

}

unsigned long Chrono::getTempsRestant()const{

    if((pause == false) and (demarage == true)){
        tempsRestant = 100 - getTempsEcoule();
        if(tempsRestant > 100){
            return 0;
        }
        else{
            return tempsRestant;
        }
    }
    else{
        return tempsR;
    }

}

void Chrono::veriFinMatch()const{

    if((getTempsEcoule() >= 100)){
        while(true){
            delay(100000);
        }
    }

}