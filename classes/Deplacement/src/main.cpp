#include "Deplacement.hpp"

Deplacement roues (4, 5 ,6 ,7);

void setup(){

    roues.vitesse(5000);
    roues.configurer(240, 80);
    
}

void loop()
{

    roues.tourner(45);

}