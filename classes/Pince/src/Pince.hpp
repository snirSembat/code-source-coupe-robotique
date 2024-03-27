#ifndef Pince_HPP
#define Pince_HPP
#include <Servo.h>

class Pince {
  public:
    Pince::Pince (int brochGauche,int BrocheDroite  ,int brocheSerrage  ,int BrocheLever );
    bool estOuvert ()const;
    bool estLevee ()const;
    void ouvrir();
    void fermer();
    void lever() ;
    void baisser();
    void begin ();

  private:
    Servo servoGauchePince;
    Servo servoDroitPince;
    Servo servoSerrage;
    Servo servoLever;
    int brocheGauche;
    int brocheDroite;
    int brocheLever;
    int brocheSerrage;
    int angleGauche;
    int angleDroit;
    int angleHaut;
    int angleBas;
    bool estOuvert();
    bool estLevee();
};

#endif