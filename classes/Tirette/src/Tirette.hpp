#include <Arduino.h>
#ifndef tirette_HPP
#define tirette_HPP

class Tirette {
    public:
    Tirette(int brocheTirette);
    bool estEnPlace() const;
    bool estRetiree() const;
    
    private:
    const int brocheTirette;
};
#endif
