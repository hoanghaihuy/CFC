#ifndef MELT_H
#define MELT_H
    #include <iostream>

    class Melt {
        friend std::ostream & operator<<(std::ostream&, const Melt&);
        char value;
        int diff;
        public:
            Melt();
            Melt(char);
            Melt& operator-(Melt&);
            char getValue() { return value; };
            void setDiff(int _diff) { diff = _diff; };
            int getDiff() { return diff; };
    };

#endif
