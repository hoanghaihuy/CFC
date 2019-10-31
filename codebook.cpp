#ifndef CODEBOOK_CPP
#define CODEBOOK_CPP
    #include "codebook.h"

    template<class T>
    void Codebook<T>::push(T val) {
        codewordList.push_back(val);
    }

    template<class T>
    void Codebook<T>::display() {
        if (codewordList.size() > 0) {
            for (int i = 0; i < codewordList.size(); i++) {
                codewordList[i].display();
            }
        }
    }

#endif
