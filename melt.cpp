#include "Melt.h"
#include "const.h"

Melt::Melt() : value(0) {}
Melt::Melt(char _value) {
    value = int(_value - CONVERT_ASCII);
};
Melt& Melt::operator-(Melt& other) {
    value -= other.value;
    return *this;
}
char Melt::getValue() {
    return char(value + CONVERT_ASCII);
}
