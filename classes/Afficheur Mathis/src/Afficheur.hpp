#ifndef AFFICHEUR_HPP
#define AFFICHEUR_HPP
#include <Stream.h>
#include <string.h>


class Afficheur{

public :
    Afficheur();
    void setCouleur(int numCouleur);
    void ajoutePoint(int point);
    void setInfo(String texte);

    



private :

    int couleur;
    int score;
    String info;



};

#endif
