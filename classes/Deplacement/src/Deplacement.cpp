#include "Deplacement.hpp"

Deplacement::Deplacement (int brocheXA, int brocheXB, int brocheYA, int brocheYB): stepper1(AccelStepper::FULL2WIRE, brocheXA, brocheXB), stepper2(AccelStepper::FULL2WIRE, brocheYA, brocheYB){

    

}

void Deplacement::vitesse (int vitesse){
    stepper1.setMaxSpeed(vitesse);
    stepper1.setSpeed(vitesse);
    stepper1.setAcceleration(vitesse);
    
    stepper2.setMaxSpeed(vitesse);
    stepper2.setSpeed(vitesse);
    stepper2.setAcceleration(vitesse);
}

void Deplacement::avancer (int distance){

    stepper1.move(-distance);
    stepper2.move(distance);

    stepper1.run();
    stepper2.run();
}

void Deplacement::tourner (int angle){

    stepper1.move(angle);
    stepper2.move(angle);

    stepper1.run();
    stepper2.run();
}