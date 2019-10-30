#include "errors.h"

// handling error function
void errorHandling(ERROR_TYPE errorType) {
    std::string errorMessage = "";
    switch (errorType) {
        case COMMAND_LINE_ERROR:
            errorMessage = "Command line is in wrong format.\nIt's required ./CFC 0 seed length size modulus (with 0 for Mint) and ./CFC 1 seed length size (with 1 for Melt).";
            break;
        case MINT_COMMAND_LINE_ERROR:
            errorMessage = "Command line is in wrong format for mint.\nIt's required ./CFC 0 seed length size modulus (with 0 for Mint).";
            break;
        case MELT_COMMAND_LINE_ERROR:
            errorMessage = "Command line is in wrong format for melt.\nIt's required ./CFC 1 seed length size (with 1 for Melt).";
            break;
        case OTHERS_COMMAND_LINE_ERROR:
            errorMessage = "Command line is in wrong format for melt.\nIt's required seed length size or modulus (if it's Mint) must be positive integers.";
            break;
        default:
            errorMessage = "Error!";
            break;
    }

    std::cerr << errorMessage << std::endl;
    std::exit(1);
}
