#ifndef DEPLACEMENT_HPP
#define DEPLACEMENT_HPP
#include <Arduino.h>
#include <AccelStepper.h>

class Deplacement {

    public:
    
    Deplacement(int brocheXA, int brocheXB, int brocheYA, int brocheYB);
    void avancer(double distance);
    void tourner(double angle);
    void vitesse(int vitesse);
    void configurer (float distRoues ,float diamRoues);
    void stop();

    private:
    int brocheXA;
    int brocheXB;
    int brocheYA;
    int brocheYB;
    float entraxRoues;
    float diametreRoues;
    AccelStepper stepper1;
    AccelStepper stepper2;

};

#endif