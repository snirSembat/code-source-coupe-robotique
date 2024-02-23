#include "Deplacement.hpp"



Deplacement::Deplacement (int brocheXA, int brocheXB, int brocheYA, int brocheYB): brocheXA(brocheXA), brocheXB(brocheXB), brocheYA(brocheYA), brocheYB(brocheYB){

    AccelStepper stepper1(AccelStepper::FULL2WIRE, brocheXA, brocheXB);
    AccelStepper stepper2(AccelStepper::FULL2WIRE, brocheYA, brocheYB);

    stepper1.setMaxSpeed(1000);
    stepper1.setAcceleration(1000);
    
    stepper2.setMaxSpeed(1000);
    stepper2.setAcceleration(1000);
}

void Deplacement::avancer (int distance){

    stepper1.moveTo(-distance);
    stepper2.moveTo(distance);

    if (stepper1.distanceToGo() == 0)
	stepper1.moveTo(-stepper1.currentPosition());
    if (stepper2.distanceToGo() == 0)
	stepper2.moveTo(-stepper2.currentPosition());

    stepper1.run();
    stepper2.run();

}
