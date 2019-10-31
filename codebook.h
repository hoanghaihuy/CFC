#ifndef CODEBOOK_H
#define CODEBOOK_H
    #include <iostream>
    #include <vector>

    template<class T>
    class Codebook {
        private:
            std::vector<T> codewordList;
            int smallestWeight;
            std::vector<std::vector<int>> codewordDistList;
        public:
            void push(T);
            void display();
            void findSmallestWeight();
            void calcDist(int = 0);
    };

#endif
