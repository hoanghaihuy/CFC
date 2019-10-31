#include <iostream>
#include <typeinfo>
#include "generateValue.h"
#include "errors.h"
#include "const.h"
#include "codeword.h"
#include "codeword.cpp"
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

        Codeword<Mint> codewordMint;
        Codeword<Melt> codewordMelt;

        if (atoi(argv[1]) == 0){
            modulus = atoi(argv[5]);
            for (int i = 0; i < length; i++) {
                Mint mint(generateMint(seed, modulus));
                codewordMint.push(mint);
            }
            codewordMint.findWeight();
            codewordMint.display();
        } else {
            for (int i = 0; i < length; i++) {
                Melt melt(generateMelt(seed));
                codewordMelt.push(melt);
            }
            codewordMelt.findWeight();
            codewordMelt.display();
        }

    }

    return 0;
}
