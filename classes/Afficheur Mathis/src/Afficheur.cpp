#include "Afficheur.hpp"
#include "Arduino.h"
#include <string.h>
#include <rgb_lcd.h>
 

Afficheur::Afficheur(): couleur(0), score(0), info(""){
}

void Afficheur::setBegin(int a,int b){
    lcd.begin(a,b);
}

void Afficheur::setCouleur(int couleur){
    
    if (couleur == 0) {
        lcd.setRGB(0, 0, 255); 
    } else if (couleur == 1) {
        lcd.setRGB(255, 255, 0);
    } else if (couleur == 2) {
        lcd.setRGB(255, 0, 0);
    } else if (couleur == 3) {
        lcd.setRGB(0, 255, 0);    
    } else {
        lcd.setRGB(255, 255, 255); 
    }
   
}

void Afficheur::ajoutePoint(int Point){
    
    score += Point;
    displayInfo();

 
}

void Afficheur::setInfo(String texte){
    
    info = texte; 
    displayInfo();  
}


void Afficheur::displayInfo() {
    lcd.clear(); 
    lcd.print(info);

    lcd.setCursor(0, 1);
    lcd.print("Score: ");
    lcd.print(score);
}