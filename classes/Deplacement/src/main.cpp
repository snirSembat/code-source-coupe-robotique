#include <AccelStepper.h>
#include "Deplacement.hpp"

Deplacement roues(2, 3, 7, 6);


void setup(){
}

void loop()
{
    roues.avancer(50);
    delay(1000);
}