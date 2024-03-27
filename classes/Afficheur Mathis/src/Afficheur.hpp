#ifndef AFFICHEUR_HPP
#define AFFICHEUR_HPP
#include <Stream.h>
#include <string.h>
#include <rgb_lcd.h>

class Afficheur{

public :
    Afficheur();

    void setCouleur(int couleur); //Permet de choisir une Couleur : 1 = Jaune, 0 = Bleu, 2 = Rouge , 3 = Vert , 4 = Blanc
    void ajoutePoint(int point);  //Permet d'ajouter des points au score
    void setInfo(String texte);   //Permet d'afficher des infos "pas plus de 16 caractères"
    void setBegin(int a, int b);  //Permet de setup l'écran LCD
    
private :

    int couleur;
    int score;
    String info;
    rgb_lcd lcd;
    void displayInfo();

  
};
   


#endif