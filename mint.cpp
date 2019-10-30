#include "mint.h"

Mint::Mint() : value(0) {}
Mint::Mint(int _value) : value(_value) {};
Mint& Mint::operator-(Mint& other) {
    value -= other.value;
    return *this;
}
