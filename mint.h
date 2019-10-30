#ifndef MINT_H
#define MINT_H
    #include <iostream>

    class Mint {
        friend std::ostream & operator<<(std::ostream&, const Mint&);
        int value;
        public:
            Mint();
            Mint(int);
            Mint& operator-(Mint&);
            int getValue() { return value; };
    };

#endif
