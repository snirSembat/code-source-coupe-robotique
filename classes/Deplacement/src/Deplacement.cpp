#include "Deplacement.hpp"

Deplacement::Deplacement (int brocheXA, int brocheXB, int brocheYA, int brocheYB):brocheXA(brocheXA), brocheXB(brocheXB), brocheYA(brocheYA), brocheYB(brocheYB){

    AccelStepper stepperX(AccelStepper::FULL2WIRE, 4, 5);
    AccelStepper stepperY(AccelStepper::FULL2WIRE, 6, 7);

    stepper1 = stepperX;
    stepper2 = stepperY;
}

void Deplacement::vitesse (int vitesse){
    stepper1.setMaxSpeed(vitesse);
    stepper1.setAcceleration(vitesse);
    
    stepper2.setMaxSpeed(vitesse);
    stepper2.setAcceleration(vitesse);
}

void Deplacement::avancer (int distance){

    if (stepper1.distanceToGo() == 0){
        stepper1.moveTo(stepper1.currentPosition()+distance);}
    if (stepper2.distanceToGo() == 0){
        stepper2.moveTo(stepper2.currentPosition()+distance);}
    stepper1.run();
    stepper2.run();

}

void Deplacement::tourner (int angle){

    if (stepper1.distanceToGo() == angle)
	stepper1.moveTo(-stepper1.currentPosition());
    if (stepper2.distanceToGo() == angle)
	stepper2.moveTo(-stepper2.currentPosition());
    stepper1.runSpeed();
    -stepper2.runSpeed();
}

void Deplacement::stop(int pause){

    stepper1.stop();
    stepper2.stop();

    delayMicroseconds(pause);
}