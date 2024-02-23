#include <Arduino.h>
#ifndef Tirette_HPP
#define Tirette_HPP

class Tirette {
    public:
    Tirette(int brocheTirette);
    bool estEnPlace() const;
    bool estRetiree() const;
    
    private:
    const int brocheTirette;
};
#endif
