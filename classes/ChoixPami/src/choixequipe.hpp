#ifndef choixequipe_hpp
#define choixequipe_hpp

class EquipePami{

    private:
        const int brocheBouton ;
        const int brocheLed ;
        int couleur ;
        int num ;
    public:
        EquipePami(int brocheBouton , int brocheLed);
        void choixCouleurEtNum();
        bool getCouleur() const ;
        int getNum() const;
};




#endif 