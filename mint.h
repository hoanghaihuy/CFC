#ifndef MINT_H
#define MINT_H
    #include <iostream>

    class Mint {
        int value;
        public:
            Mint();
            Mint(int);
            Mint& operator-(Mint&);
    };

#endif
