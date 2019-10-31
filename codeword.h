#ifndef CODEWORD_H
#define CODEWORD_H
    #include <iostream>
    #include <vector>

    template<class T>
    class Codeword {
        private:
            int weight;
            std::vector<T> symbolList;
            std::vector<int> distance;
        public:
            Codeword();
            void push(T);
            void findWeight();
            int getWeight() { return weight; };
            void findDistance(std::vector<T>, int = 0);
            std::vector<int> getDistance() { return distance; };
            std::vector<T> getSymbolList() { return symbolList; };
            void display();
    };

#endif
