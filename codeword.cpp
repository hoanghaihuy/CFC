#ifndef CODEWORD_CPP
#define CODEWORD_CPP
    #include <iostream>
    #include <typeinfo>
    #include "codeword.h"
    #include "mint.h"
    #include "melt.h"

    template<class T>
    Codeword<T>::Codeword(int n) {
        size = n > 0 ? n : 10;
        top = -1;
        weight = 0;
        stack = new T[size];
    }

    template<class T>
    bool Codeword<T>::push(const T& val) {
        if (!isFull()) {
            stack[++top] = val;
            return true;
        }
        return false;
    }

    template<class T>
    bool Codeword<T>::pop(T& val) {
        if (!isEmpty()) {
            val = stack[top--];
            return true;
        }
        return false;
    }

    template<class T>
    void Codeword<T>::findWeight() {
        if (!isEmpty()) {
            if (typeid(stack[0]).name() == typeid(Mint).name()) {
                for (int i = 0; i < size; i++) {
                    if (stack[i].getValue() != 0) weight++;
                }
            } else {
                for (int i = 0; i < size; i++) {
                    if (stack[i].getValue() != 'a') weight++;
                }
            }
        }
    }

    template<class T>
    void Codeword<T>::display() {
        if (!isEmpty()) {
            for (int i = 0; i < size; i++) {
                cout << stack[i] << " ";
            }
            cout << "\t Weight: " << weight << endl;
        }
    }
#endif
