#include <Arduino.h>
#include "tirette.hpp"

Tirette::Tirette(int pin):brocheTirette(pin){
     pinMode (brocheTirette, INPUT_PULLUP);
}

bool Tirette::estEnPlace() const {
    return digitalRead(brocheTirette) == LOW;
}

bool Tirette::estRetiree() const {
    return digitalRead(brocheTirette) == HIGH;
}
