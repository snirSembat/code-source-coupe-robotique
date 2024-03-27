#include "Detection.hpp"
 

Detection::Detection(  int brocheCapteurAV , int brocheCapteurAR )
    : brocheCapteurAV(brocheCapteurAV),  brocheCapteurAR(brocheCapteurAR) { 
} 
      
Detection::Detection(int brocheCapteurAVG ,int brocheCapteurAVD,int brocheCapteurARD,int brocheCapteurARG )
    : brocheCapteurAVG(brocheCapteurAVG),brocheCapteurAVD(brocheCapteurAVD), brocheCapteurARD(brocheCapteurARD), brocheCapteurARG(brocheCapteurARG){
} 

bool Detection::obstacleDevant()const {
  
}

bool Detection::obstacleDerriere()const{

} 

 int Detection::setSeuilObstacle(int seuilObstacle){
  /*
    if (seuilObstacle < 0 || seuilObstacle >  1023)
      {
        std::cerr << "Erreur : le paramètre de la fonction setSeuilObstacle doit être compris entre  0 et 1023." <<
        std::cerr << "Erreur : le nombre de pas doit être compris entre 0 et 1023." << std::endl;
        return false;
      }
    */
}

int Detection::mesureAV()const {
      
}

int Detection::mesureAR()const {

}