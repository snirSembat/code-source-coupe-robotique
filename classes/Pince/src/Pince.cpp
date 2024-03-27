#include "Pince.hpp"
#include <Arduino.h>
#include <Servo.h>

Pince::Pince( int brocheGauche,int brocheDroite  ,int brocheSerrage  ,int brocheLever )
  : brocheGauche(brocheGauche),brocheDroite(brocheDroite),brocheSerrage(brocheSerrage),brocheLever(brocheLever)
    
{
    
}


void Pince::begin() {
    servoDroitPince.attach(6);
    servoGauchePince.attach(5);
    servoLever.attach(4);
    servoSerrage.attach(3);
   

}
bool Pince::estOuvert() const {
    return false;
}

bool Pince::estLevee() const {
    return false;
}

void Pince::ouvrir() {
    int angleGauche (180);
    int angleDroit (180);
    int angleHaut (180);
    int angleBas (180);
    servoGauchePince.write(angleGauche);
    servoDroitPince.write(angleDroit);
    servoSerrage.write(angleHaut);
    servoLever.write(angleBas);
}
void Pince::fermer() {
    // marty on a besoin de faire des test
     int angleGauche (0);
    int angleDroit (0);
    int angleHaut (0);
    int angleBas (0);
    servoGauchePince.write(angleGauche);
    servoDroitPince.write(angleDroit);
    servoSerrage.write(angleHaut);
    servoLever.write(angleBas);
}

void Pince::lever() {
    int angleGauche (0);
    int angleDroit (0);
    int angleHaut (0);
    int angleBas (0);
    servoGauchePince.write(angleGauche);
    servoDroitPince.write(angleDroit);
    servoSerrage.write(angleHaut);
    servoLever.write(angleBas);
}
void Pince::baisser() {
    int angleGauche (0);
    int angleDroit (0);
    int angleHaut (0);
    int angleBas (0);
    servoGauchePince.write(angleGauche);
    servoDroitPince.write(angleDroit);
    servoSerrage.write(angleHaut);
    servoLever.write(angleBas);
}