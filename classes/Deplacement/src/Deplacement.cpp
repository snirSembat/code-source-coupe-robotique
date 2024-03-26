#include "Deplacement.hpp"

float pi (3.14159265359);

Deplacement::Deplacement (int brocheXA, int brocheXB, int brocheYA, int brocheYB):brocheXA(brocheXA), brocheXB(brocheXB), brocheYA(brocheYA), brocheYB(brocheYB){

    AccelStepper stepperX(AccelStepper::FULL2WIRE, brocheXA, brocheXB);
    AccelStepper stepperY(AccelStepper::FULL2WIRE, brocheYA, brocheYB);

    stepper1 = stepperX;
    stepper2 = stepperY;

}

void Deplacement::configurer(float distRoues,  float diamRoues){

    entraxRoues=distRoues;
    diametreRoues=diamRoues;

}

void Deplacement::vitesse (int vitesse){

    stepper1.setMaxSpeed(vitesse);
    stepper1.setAcceleration(vitesse);
    
    stepper2.setMaxSpeed(vitesse);
    stepper2.setAcceleration(vitesse);

}

void Deplacement::avancer (double distance){

    /* Avancer peut être utiliser pour reculer en utilisant un valeur negative
    La distance est en mm */

    distance = distance*(pi*diametreRoues*(1.8/36));

    if (stepper1.distanceToGo() == 0){
        stepper1.moveTo(stepper1.currentPosition()+distance);}

    if (stepper2.distanceToGo() == 0){
        stepper2.moveTo(stepper2.currentPosition()+distance);}

    stepper1.run();
    stepper2.run();

}

void Deplacement::tourner (double angle){

    /* pour tourner à gauche, mettre une valeur negative, pour tourner à droite, mettre une valeur positive
    La l'angle est en degrés */

    angle = (entraxRoues*pi*(angle/360))*(pi*diametreRoues*(1.8/36));

    if (stepper1.distanceToGo() == 0)
	stepper1.moveTo(stepper1.currentPosition()+angle);

    if (stepper2.distanceToGo() == 0)
	stepper2.moveTo(stepper2.currentPosition()-angle);

    stepper1.run();
    stepper2.run();

}

void Deplacement::stop(){
    stepper1.stop();
    stepper2.stop();
}