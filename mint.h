#ifndef MINT_H
#define MINT_H
    #include <iostream>

    class Mint {
        friend std::ostream & operator<<(std::ostream&, const Mint&);
        int value;
        int diff;
        public:
            Mint();
            Mint(int);
            Mint& operator-(Mint&);
            int getValue() { return value; };
            void setDiff(int _diff) { diff = _diff; };
            int getDiff() { return diff; };
    };

#endif
