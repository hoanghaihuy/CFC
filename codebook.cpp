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

    template<class T>
    void Codebook<T>::findSmallestWeight() {
        int temp = 0;
        for (int i = 0; i < codewordList.size(); i++) {
            if (temp == 0 || (codewordList[i].getWeight() < temp && codewordList[i].getWeight() > 0)) {
                temp = codewordList[i].getWeight();
            }
        }
        smallestWeight = temp;
        cout << "The minimum weight: " << smallestWeight << endl;
    }

    template<class T>
    void Codebook<T>::calcDist(int modulus) {
        for (int i = 0; i < codewordList.size(); i++) {
            for (int j = 0; j < codewordList.size(); j++) {
                codewordList[i].findDistance(codewordList[j].getSymbolList(), modulus);
            }
            codewordDistList.push_back(codewordList[i].getDistance());
        }

        int temp = 0;
        for (int i = 0; i < codewordDistList.size(); i++) {
            for (int j = 0; j < codewordDistList[i].size(); j++) {
                cout << codewordDistList[i][j] << " ";
                if (temp == 0 || (codewordDistList[i][j] < temp && codewordDistList[i][j] > 0)) {
                    temp = codewordDistList[i][j];
                }
            }
            cout << endl;
        }
        smallestDist = temp;
        cout << "The minimum distance: " << smallestDist << endl;
    }

#endif
