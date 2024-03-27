#ifndef DEPLACEMENT_HPP
#define DEPLACEMENT_HPP
#include <Arduino.h>
#include <AccelStepper.h>
#include <math.h>

class Deplacement {

    public:

    /* si la carte utilisé à un shield xbee pro stepper motor shield (regarder en dessous du shield du coté des branchement)
    mettre les port 4, 5, 6, 7 */
    Deplacement(int brocheXA, int brocheXB, int brocheYA, int brocheYB);

    /* mettre la la distance qui sépare les roues et le diammetre des roues en mm */
    void configurer (float distRoues ,float diamRoues);

    /* pour la vitesse, faite des essais pour voir ce qui est intérésent, 5000 est pas mal */
    void vitesse(int vitesse);

    /* Avancer peut être utiliser pour reculer en utilisant un valeur negative
    La distance est en mm */
    void avancer(double distance);

    /* pour tourner à gauche, mettre une valeur negative, pour tourner à droite, mettre une valeur positive
    La l'angle est en degrés */
    void tourner(double angle);

    /* arret d'urgence des roues */
    void stop();

    /* permet de remetre le robot en place lorsqu'il est non loin d'un mur
    il faut utiliser regainVitesse après chaque utilisation de cette commande */
    void recalage(int vitesse, int distance);

    /* A utiliser a chaque fois qu'il y a un changement de vitesse */
    void regainVitesse();

    /* pour initialiser la position de départ du robot */
    void posDebut(float x, float y, float angle);   
    

    private:
    int distAParcourir;
    int vitesseOrigine;
    int brocheXA;
    int brocheXB;
    int brocheYA;
    int brocheYB;
    float entraxRoues;
    float diametreRoues;
    float posX;
    float posY;
    float angleRobot;
    AccelStepper stepper1;
    AccelStepper stepper2;

};

#endif