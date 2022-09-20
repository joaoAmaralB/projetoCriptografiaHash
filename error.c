#include <stdio.h>
#include <stdlib.h>
#include "error.h"

void missing_error(int a){
    if (a < 4){ //Se argc for menor que 4, significa que algum arquivo está faltando.
        printf("Faltam arquivos para o programa.");
        exit(0); //Termina o programa.
    }    
}

void file_error(FILE* a){
    if (a == NULL){ //Se o arquivo não for aberto.
        printf("Arquivo nao pode ser aberto.");
        exit(0); //Termina o programa.
    }
}

void dynamicU_error(user* user_data){
    if (user_data == NULL){ //Se a alocação dinâmica der errado para o primeiro arquivo. 
        printf("Nao foi possivel alocar memoria dinamicamente");
        exit(0); //Termina o programa.
    }
}

void dynamicP_error(password* password_data){
    if (password_data == NULL){ //Se a alocação dinâmica der errado para o primeiro arquivo. 
        printf("Nao foi possivel alocar memoria dinamicamente");
        exit(0); //Termina o programa.
    }
}