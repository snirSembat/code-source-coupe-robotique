#ifndef Bras_hpp
#define Bras_hpp
#include <Servo.h>

class Bras { 

    public:
        Bras();
        void broche (int brocheBras);
        void rentrer(int angleRentrer); 
        void sortir(int angleSortie);
    
    private:
        Servo servoMoteur;
        int angleRentrer;      
        int angleSortie;
        int brocheBras; 
};

#endif
