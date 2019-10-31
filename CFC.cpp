#include <iostream>
#include <typeinfo>
#include "generateValue.h"
#include "errors.h"
#include "const.h"
#include "codeword.h"
#include "codeword.cpp"
#include "codebook.h"
#include "codebook.cpp"
#include "mint.h"
#include "melt.h"
using namespace std;

int main(int argc, char *argv[]) {
    if (argc > 6 || argc < 5) {
        errorHandling(COMMAND_LINE_ERROR);
    } else if (atoi(argv[1]) == 0 && argc != 6) {
        errorHandling(MINT_COMMAND_LINE_ERROR);
    } else if (atoi(argv[1]) == 1 && argc != 5) {
        errorHandling(MELT_COMMAND_LINE_ERROR);
    } else if (!(atoi(argv[2]) > 0 && atoi(argv[3]) > 0 && atoi(argv[4]) > 0) || (atoi(argv[1]) == 0 && atoi(argv[5]) <= 0)){
        errorHandling(OTHERS_COMMAND_LINE_ERROR);
    } else {
        int seed = atoi(argv[2]);
        int length = atoi(argv[3]);
        int size = atoi(argv[4]);
        int modulus = 0;


        Codebook<Codeword<Mint>> codebookMint;
        Codebook<Codeword<Melt>> codebookMelt;

        if (atoi(argv[1]) == 0){
            modulus = atoi(argv[5]);
            for (int i = 0; i < size; i++) {
                Codeword<Mint> codewordMint;
                for (int j = 0; j < length; j++) {
                    Mint mint;
                    if (i != 0) mint = Mint(generateMint(seed, modulus));
                    codewordMint.push(mint);
                }
                codewordMint.findWeight();
                codebookMint.push(codewordMint);
            }
            codebookMint.display();
            codebookMint.findSmallestWeight();
            codebookMint.calcDist(modulus);
        } else {
            for (int i = 0; i < size; i++) {
                Codeword<Melt> codewordMelt;
                for (int j = 0; j < length; j++) {
                    Melt melt;
                    if (i != 0) melt = Melt(generateMelt(seed));
                    codewordMelt.push(melt);
                }
                codewordMelt.findWeight();
                codebookMelt.push(codewordMelt);
            }
            codebookMelt.display();
            codebookMelt.findSmallestWeight();
            codebookMelt.calcDist();
        }

    }

    return 0;
}
