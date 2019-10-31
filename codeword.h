#ifndef CODEWORD_H
#define CODEWORD_H
    #include <iostream>

    template<class T>
    class Codeword {
        private:
            int size;
            int top;
            int weight;
            T *stack;
        public:
            Codeword();
            Codeword(int);
            ~Codeword() { delete [] stack; }
            bool push(const T&);
            bool pop(T&);
            void findWeight();
            int distance();
            void display();
        private:
            bool isFull() const { return top == size - 1; }
            bool isEmpty() const { return top == -1; }
    };

#endif
