#include "Afficheur.hpp"
#include "Arduino.h"
#include <string.h>
#include <rgb_lcd.h>
 



Afficheur::Afficheur(): couleur(0), score(0), info(""){
    lcd.begin(16, 2);

}

void Afficheur::setCouleur(int numCouleur){
    couleur += numCouleur;
    lcd.setColor(numCouleur);
}

void Afficheur::ajoutePoint(int Point){
    score = Point;
    lcd.print(Point);
    lcd.setCursor(2,1);
    
}

void Afficheur::setInfo(String texte){
    info = texte;
    lcd.print(texte);
    lcd.setCursor(2,1);
    
    
}