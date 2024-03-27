#include <Arduino.h>
#include <Afficheur.hpp>
#include <rgb_lcd.h>




Afficheur monAfficheur;

void setup() {

    

monAfficheur.setBegin(16,2);


 monAfficheur.setCouleur(1);
monAfficheur.setInfo("A B C D E F H");
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.setInfo("qqqqqqqqqqq");
delay(500);
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.ajoutePoint(10);
delay(500);
monAfficheur.ajoutePoint(10);
delay(1000);
monAfficheur.setInfo("qqqqfezfeqqq");
delay(500);
monAfficheur.ajoutePoint(30);
delay(500);
monAfficheur.ajoutePoint(-10);













 
}

void loop() {
 
    
   
    
 
}

