#ifndef Bras_hpp
#define Bras_hpp
#include <Servo.h>

class Bras { 

    public:
        Bras(int brocheBras);
        void begin ();
        void rentrer(); 
        void sortir();
        void configAngle(int angleRentrer,int angleSortie);
    private:
        Servo servoMoteur;
        int angleRentrer;      
        int angleSortie;
        int brocheBras; 
};

#endif
