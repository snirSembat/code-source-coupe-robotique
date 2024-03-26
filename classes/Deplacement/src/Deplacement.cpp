#include "Deplacement.hpp"

float pi (3.14159265359);

Deplacement::Deplacement (int brocheXA, int brocheXB, int brocheYA, int brocheYB):brocheXA(brocheXA), brocheXB(brocheXB), brocheYA(brocheYA), brocheYB(brocheYB){

    /* si la carte utilisé à un shield xbee pro stepper motor shield (regarder en dessous du shield du coté des branchement)
    mettre les port 4, 5, 6, 7 */

    AccelStepper stepperX(AccelStepper::FULL2WIRE, brocheXA, brocheXB);
    AccelStepper stepperY(AccelStepper::FULL2WIRE, brocheYA, brocheYB);

    stepper1 = stepperX;
    stepper2 = stepperY;

}

void Deplacement::configurer(float distRoues,  float diamRoues){

    /* mettre la la distance qui sépare les roues et le diammetre des roues en mm */

    entraxRoues=distRoues;
    diametreRoues=diamRoues;

}


void Deplacement::vitesse (int vitesse){

    /* pour la vitesse, faite des essais pour voir ce qui est intérésent, 5000 est pas mal */

    vitesseOrigine = vitesse;

    stepper1.setMaxSpeed(vitesseOrigine);
    stepper1.setAcceleration(vitesseOrigine);
    
    stepper2.setMaxSpeed(vitesseOrigine);
    stepper2.setAcceleration(vitesseOrigine);

}

void Deplacement::avancer (double distance){

    /* Avancer peut être utiliser pour reculer en utilisant un valeur negative
    La distance est en mm */

    distAParcourir = distance*(pi*diametreRoues*(1.8/36));

    while ((stepper1.distanceToGo() != 0)and (stepper2.distanceToGo() != 0)){

    if (stepper1.distanceToGo() == 0){
        stepper1.moveTo(stepper1.currentPosition()+distAParcourir);}

    if (stepper2.distanceToGo() == 0){
        stepper2.moveTo(stepper2.currentPosition()+distAParcourir);}

    stepper1.run();
    stepper2.run();

    }

    posX = posX + (distance*sin(angleRobot));
    posY = posY + (distance*cos(angleRobot));

}

void Deplacement::tourner (double angle){

    /* pour tourner à gauche, mettre une valeur negative, pour tourner à droite, mettre une valeur positive
    La l'angle est en degrés */

    

    int angleDep = (entraxRoues*pi*(angle/360))*(pi*diametreRoues*(1.8/36));

    while ((stepper1.distanceToGo() != 0)and (stepper2.distanceToGo() != 0)){

    if (stepper1.distanceToGo() == 0)
	stepper1.moveTo(stepper1.currentPosition()+angleDep);

    if (stepper2.distanceToGo() == 0)
	stepper2.moveTo(stepper2.currentPosition()-angleDep);

    stepper1.run();
    stepper2.run();

    }

    angleRobot += angle;

    if (angleRobot >= 360){
        angleRobot -=360;
    }

}

void Deplacement::stop(){

    /* arret d'urgence des roues */

    stepper1.stop();
    stepper2.stop();
    

    int dist = distAParcourir - stepper1.distanceToGo();

    dist = dist*(pi*diametreRoues*(1.8/36));

    posX = posX + (dist*sin(angleRobot));
    posY = posY + (dist*cos(angleRobot));
}

void Deplacement::recalage (int vitesse, int distance){

    /* permet de remetre le robot en place lorsqu'il est non loin d'un mur
    il faut utiliser regainVitesse après chaque utilisation de cette commande */

    stepper1.setMaxSpeed(vitesse);
    stepper1.setAcceleration(vitesse);
    
    stepper2.setMaxSpeed(vitesse);
    stepper2.setAcceleration(vitesse);

    distAParcourir = distance*(pi*diametreRoues*(1.8/36));

    while ((stepper1.distanceToGo() != 0)and (stepper2.distanceToGo() != 0)){
    if (stepper1.distanceToGo() == 0){
        stepper1.moveTo(stepper1.currentPosition()+distAParcourir);}

    if (stepper2.distanceToGo() == 0){
        stepper2.moveTo(stepper2.currentPosition()+distAParcourir);}

    stepper1.run();
    stepper2.run();
    }

    posX = posX + (distance*sin(angleRobot));
    posY = posY + (distance*cos(angleRobot));

    if (posX > 3000){
        posX = 3000;
    }

    if (posX < 0){
        posX = 0;
    }

    if (posY > 2000){
        posY = 2000;
    }

    if (posY < 0){
        posY = 0;
    }
}

void Deplacement::regainVitesse (){

    /* A utiliser a chaque fois qu'il y a un changement de vitesse */
    
    stepper1.setMaxSpeed(vitesseOrigine);
    stepper1.setAcceleration(vitesseOrigine);
    
    stepper2.setMaxSpeed(vitesseOrigine);
    stepper2.setAcceleration(vitesseOrigine);

}

void Deplacement::posDebut(float x, float y, float angle){

    /* pour initialiser la position de départ du robot */

    posX = x;
    posY = y;
    angleRobot = angle;

}