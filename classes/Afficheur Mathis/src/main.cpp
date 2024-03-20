#include <Arduino.h>
#include <Afficheur.hpp>
#include <rgb_lcd.h>

rgb_lcd lcd;
Afficheur monAfficheur;

void setup() {
  
  lcd.begin(16, 2);

  monAfficheur.setCouleur(1);
  monAfficheur.ajoutePoint(5);
  monAfficheur.setInfo("jjjzzpozpoz");

 
}

void loop() {
 
}

