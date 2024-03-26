#include <Arduino.h>
#include "Tirette.hpp"

Tirette::Tirette(int pin):brocheTirette(pin){}

bool Tirette::estEnPlace() const {
    return digitalRead(brocheTirette) == LOW;
}

bool Tirette::estRetiree() const {
    return digitalRead(brocheTirette) == HIGH;
}
