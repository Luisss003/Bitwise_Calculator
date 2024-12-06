#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "constants.h"
#include "utils.h"

int main(int argc, char* argv[]){

    if(argc < 2){
        printf("ERROR: Usage: bitwise_calcualtor [flags] [operation] [operand1] [operand2] ...\n");  
        exit(0);
    }
    if((argc == 2) && (strcmp(argv[1], HELP) == 0)){
        helpMenu();
        exit(0);
    }

    //1. check for user input to look for --help, and then for anything else
    char operation[4];
    
    

}
