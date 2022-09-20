#include <stdio.h>
#include <stdlib.h>
#include "error.h"

void missing_error(int a){
    if (a < 3){ //Se argc for menor que 3, significa que algum arquivo está faltando.
        printf("Missing files.");
        exit(0); //Termina o programa.
    }    
}

void file_error(FILE* a, int b){
    if (a == NULL && b == 1){ //Se o arquivo de labirinto não for aberto.
        printf("First file cannot be opened.");
        exit(0); //Termina o programa.
    }
    if (a == NULL && b == 2){ //Se o arquivo de caminho não for aberto.
        printf("Second file cannot be opened.");
        exit(0); //Termina o programa.
    }
}

void dynamic_error(char** maze){
    if (maze == NULL){ //Se a alocação dinâmica der errado para o primeiro arquivo. 
        printf("Unable to dynamically allocate memory");
        exit(0); //Termina o programa.
    }
}
