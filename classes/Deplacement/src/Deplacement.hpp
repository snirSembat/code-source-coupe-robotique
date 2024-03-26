#ifndef DEPLACEMENT_HPP
#define DEPLACEMENT_HPP
#include <Arduino.h>
#include <AccelStepper.h>
#include <math.h>

class Deplacement {

    public:
    
    Deplacement(int brocheXA, int brocheXB, int brocheYA, int brocheYB);
    void posDebut(float x, float y, float angle);
    void avancer(double distance);
    void tourner(double angle);
    void vitesse(int vitesse);
    void configurer (float distRoues ,float diamRoues);
    void recalage(int vitesse, int distance);
    void regainVitesse();
    void stop();
    float posX;
    float posY;
    float angleRobot;

    private:
    int distAParcourir;
    int vitesseOrigine;
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