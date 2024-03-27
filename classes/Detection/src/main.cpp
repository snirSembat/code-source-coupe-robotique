#include <Arduino.h>
#include "Detection.hpp"

const int brocheCapteurAV   =  1;
const int brocheCapteurAR   =  2;           
const int brocheCapteurAVD  =  3;
const int brocheCapteurAVG  =  4;                        // Broche des  Capteur  Capteur Avant Arrière Gauche droit etc ...
const int brocheCapteurARD  =  5;
const int brocheCapteurARG  =  6;
int seuilObstacle = 0;

Detection dt1(brocheCapteurAV,brocheCapteurAR);
Detection dt2(brocheCapteurAVG,brocheCapteurAVD,brocheCapteurARD,brocheCapteurARG);

void setup() {
        dt1.obstacleDerriere();
        dt1.setSeuilObstacle(seuilObstacle);
        
        dt2.mesureAV();
        dt2.mesureAR();
    
}


void loop(){

}
    



