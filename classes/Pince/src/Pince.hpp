#ifndef Pince_HPP
#define Pince_HPP


class Pince {

 public:
    Pince (int brocheServoGauche,int brocheServoDroite,int brocheSerrage, int brochelevee );
    bool estOuvert ()const;
    bool estLevee ()const;
    void ouvrir();
    void fermer();
    void lever() ;
    void baisser();

 private:
    const int brocheServoGauche ;
    const int brocheServoDroite ;
    const int brocheSerrage ;
    const int brochelevee ;
    bool estOuvert();
    bool estLevee() ;
};
#endif