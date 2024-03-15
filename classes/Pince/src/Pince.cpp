#include "Pince.hpp"
#include "Arduino.h"



Pince::Pince(const int brocheServoGauche, const int brocheServoDroite, const int brocheSerrage, const int brochelevee) 
: brocheServoGauche(brocheServoGauche),brocheServoDroite(brocheServoDroite),brocheSerrage(brocheSerrage),brochelevee(brochelevee){
   
    pinMode(brocheServoGauche, OUTPUT);
    pinMode(brocheServoDroite, OUTPUT);
    pinMode(brocheSerrage, OUTPUT);
    pinMode(brochelevee, OUTPUT);
}


