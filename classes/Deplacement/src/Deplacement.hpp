#ifndef DEPLACEMENT_HPP
#define DEPLACEMENT_HPP
#include <Arduino.h>
#include <AccelStepper.h>


class Deplacement {

    public:
    
    Deplacement(int brocheXA, int brocheXB, int brocheYA, int brocheYB);
    void avancer(int distance);
    void tourner(int angle);
    void vitesse(int vitesse);
    void stop(int pause);

    private:
    int brocheXA;
    int brocheXB;
    int brocheYA;
    int brocheYB;
    AccelStepper stepper1;
    AccelStepper stepper2;

};

#endif
/*
#include "Deplacement.hpp"


Deplacement roues (4, 5 ,7 ,6);

void setup(){   
}

void loop()
{
    roues.avancer(1000);
    delay(1000);
    roues.tourner(90);
}
*/

/*
#include "Deplacement.hpp"

AccelStepper stepper1(AccelStepper::FULL2WIRE, 4, 5);
AccelStepper stepper2(AccelStepper::FULL2WIRE, 7, 6);

void setup(){

    stepper1.setMaxSpeed(1500);
    stepper1.setSpeed(1500);
    stepper1.setAcceleration(1500);
    
    stepper2.setMaxSpeed(1500);
    stepper2.setSpeed(1500);
    stepper2.setAcceleration(1500);

    
}

void loop()
{
    stepper1.move(-100);
    stepper2.move(100);

    stepper1.run();
    stepper2.run();
}
*/