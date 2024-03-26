#ifndef EQUIPEROBOT_HPP
#define EQUIPEROBOT_HPP

class EquipeRobot {

    public:
        EquipeRobot(int brocheBouton);
        void choixCouleur();
        bool getCouleur() const;
    
    private:
        const int brocheBouton;
        int couleur;
        
};
#endif
