#include "mint.h"

Mint::Mint() : value(0) {};
Mint::Mint(int _value) : value(_value) {};
Mint& Mint::operator-(Mint& other) {
    int diffTemp = value - other.value;
    Mint mint;
    mint.setDiff(diffTemp);
    return mint;
};
std::ostream& operator<<(std::ostream &out, const Mint& mint) {
    out << mint.value;
    return out;
};
