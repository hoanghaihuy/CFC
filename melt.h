#ifndef MELT_H
#define MELT_H
    #include <iostream>

    class Melt {
        int value;
        public:
            Melt();
            Melt(char);
            Melt& operator-(Melt&);
            char getValue();
    };

#endif
