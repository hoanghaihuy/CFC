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
        cout << val.getValue() << endl;
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
    void Codeword<T>::display() {
        if (symbolList.size() > 0) {
            for (int i = 0; i < symbolList.size(); i++) {
                cout << symbolList[i] << " ";
            }
            cout << "\t Weight: " << weight << endl;
        }
    }
#endif
