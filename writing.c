#include <stdio.h>
#include <stdlib.h>
#include "def.h"
#include "error.h"

void writing(int i, int position, FILE *crack_report, user *user_data, password *password_data){ //Função que escreve os usuários e suas senhas quebradas.
    fprintf(crack_report, "%s %s\n",(user_data + i)->name, (password_data + position)->password); //Imprime o nome e a senha do usuário i no arquivo de relatório.
}