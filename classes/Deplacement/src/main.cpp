#include "Deplacement.hpp"

Deplacement roues (4, 5 ,7 ,6);

void setup(){ 

roues.vitesse(1500);

}

void loop()
{
    roues.avancer(1000);
    delay(1000);
    roues.tourner(90);
}