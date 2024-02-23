#ifndef DEPLACEMENT_HPP
#define DEPLACEMENT_HPP
#include <Arduino.h>
#include <AccelStepper.h>


class Deplacement {

    public:
    
    Deplacement(int brocheXA, int brocheXB, int brocheYA, int brocheYB);
    void avancer(int distance);
    void tourner(int angle);

    private:

    int brocheXA;
    int brocheXB;
    int brocheYA;
    int brocheYB;
    AccelStepper stepper1;
    AccelStepper stepper2;

};

#endif