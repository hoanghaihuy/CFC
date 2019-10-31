#ifndef CODEWORD_H
#define CODEWORD_H
    #include <iostream>
    #include <vector>

    template<class T>
    class Codeword {
        private:
            int weight;
            std::vector<T> symbolList;
        public:
            Codeword();
            void push(T val);
            void findWeight();
            int distance();
            void display();
    };

#endif
