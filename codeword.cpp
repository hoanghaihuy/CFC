#ifndef CODEWORD_CPP
#define CODEWORD_CPP
    #include <iostream>
    #include <typeinfo>
    #include "codeword.h"
    #include "mint.h"
    #include "melt.h"

    template<class T>
    Codeword<T>::Codeword() {
        weight = 0;
    }

    template<class T>
    void Codeword<T>::push(T val) {
        symbolList.push_back(val);
    }

    template<class T>
    void Codeword<T>::findWeight() {
        if (symbolList.size() > 0) {
            if (typeid(symbolList[0]).name() == typeid(Mint).name()) {
                for (int i = 0; i < symbolList.size(); i++) {
                    if (symbolList[i].getValue() != 0) weight++;
                }
            } else {
                for (int i = 0; i < symbolList.size(); i++) {
                    if (symbolList[i].getValue() != 'a') weight++;
                }
            }
        }
    }

    template<class T>
    void Codeword<T>::findDistance(std::vector<T> other, int modulus) {
        if (symbolList.size() > 0) {
            if (typeid(symbolList[0]).name() == typeid(Mint).name()) {
                int sum = 0;
                for(int i = 0; i < symbolList.size(); i++) {
                    T t = symbolList[i] - other[i];
                    int value = t.getValue() < 0 ? ((t.getValue() % modulus) + modulus) % modulus : t.getValue() % modulus;
                    sum += value;
                }
                distance.push_back(sum);
            } else {

            }
        }
    }

    template<class T>
    void Codeword<T>::display() {
        for (int i = 0; i < symbolList.size(); i++) {
            cout << symbolList[i] << " ";
        }
        cout << "\t Weight: " << weight << endl;
    }
#endif
