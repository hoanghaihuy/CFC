#ifndef CODEBOOK_H
#define CODEBOOK_H
    #include <iostream>
    #include <vector>

    template<class T>
    class Codebook {
        private:
            std::vector<T> codewordList;
        public:
            void push(T);
            void display();
    };

#endif
