#include <iostream>
#include "errors.h"
#include "const.h"
#include "generateValue.h"
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
        int modulus = atoi(argv[5]);
        cout << generateMint(seed, modulus) << endl;
        cout << generateMelt(seed) << endl;
    }

    return 0;
}
