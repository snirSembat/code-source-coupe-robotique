#include "Deplacement.hpp"

Deplacement roues (4, 5 ,6 ,7);

void setup(){

    roues.vitesse(5000);
    roues.configurer(240, 80);
    roues.posDebut(1500, 1000, 0);
    Serial.begin(9600);
    
}

void loop()
{

    roues.avancer(10);
    roues.tourner(42);
    Serial.print(roues.posX);
    Serial.print("\t");
    Serial.print(roues.posY);
    Serial.print("\t");
    Serial.print(roues.angleRobot);
    Serial.print("\t");
    delay(2000);

}