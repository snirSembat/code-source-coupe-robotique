#ifndef Bras_hpp
#define Bras_hpp
#include <Servo.h>

class Bras { 

    public:
        Bras(int brocheBras);
        void begin ();
        void rentrer(int angleRentrer); 
        void sortir(int angleSortie);
    
    private:
        Servo servoMoteur;
        int angleRentrer;      
        int angleSortie;
        int brocheBras; 
};

#endif
