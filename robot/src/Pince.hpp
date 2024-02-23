#ifndef pince_HPP
#define pince_HPP


class Pince {

 public:
    Pince (int brochePince);
    bool estOuvert ()const;
    bool estLevee ()const;
    void ouvrir();
    void fermer();
    void lever() ;
    void baisser();

 private:
    const int brochePince1 ;
    const int brochePince2 ;
    const int brochePince3 ;
    const int brochePince4 ;
    bool estOuvert ;
    bool estLevee ;
};
