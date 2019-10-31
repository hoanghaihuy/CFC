#include <string.h>
#include "melt.h"
#include "const.h"

Melt::Melt() : value('a'), diff(0) {};
Melt::Melt(char _value) : value(_value), diff(0) {};
Melt& Melt::operator-(Melt& other) {
    Melt melt;
    if (value == other.getValue()) {
        melt.setDiff(0);
    } else {
        melt.setDiff(1);
    }
    return melt;
};
std::ostream& operator<<(std::ostream &out, const Melt& melt) {
    out << melt.value;
    return out;
};
