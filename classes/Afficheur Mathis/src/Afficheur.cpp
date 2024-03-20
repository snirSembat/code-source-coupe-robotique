#include "Afficheur.hpp"
#include "Arduino.h"
#include <string.h>


Afficheur::Afficheur(): couleur(0), score(0), info(0){}

void Afficheur::setCouleur(int numCouleur){
    couleur = numCouleur;
}

void Afficheur::ajoutePoint(int Point){
    score = Point;
}

void Afficheur::setInfo(String texte){
    info = texte;
}