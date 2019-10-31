#include "melt.h"
#include "const.h"

Melt::Melt() : value('a') {};
Melt::Melt(char _value) : value(_value) {};
Melt& Melt::operator-(Melt& other) {
    value -= other.value;
    return *this;
};
std::ostream& operator<<(std::ostream &out, const Melt& melt) {
    out << melt.value;
    return out;
};
