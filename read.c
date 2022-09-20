#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include "def.h"

int read_size(FILE *b){
    int i=0, count;
    while ((count=fgetc(b))!=EOF){ //Enquanto o character analisado for diferente do fim do arquivo.
        if(count == '\n'){ //Se o char for uma quebra de linha significa que há uma nova linha.
            i++;
        }
    }
    rewind(b); //Volta para o início do arquivo b depois de o ler até o final.
    return i; // Retorna a quantidade de linhas.
}

void store_user(FILE *b, user *user_data){ //Armazena o nome e senha cripto.
    int i=0;
    while (!feof(b)){ //Enquanto não for o final do arquivo b.
        fscanf(b, "%s %s", (user_data + i)->name, (user_data + i)->encrypted_password); //Armazena o nome e senha cripto da struct "string" user_data[i].
        i++;
    }
    fclose(b); //Fecha o arquivo b, pois já pegamos todas as informações necessárias.
}

void store_password(FILE *a, password *password_data){
    int i=0;
    while (!feof(a)){
        fscanf(a, "%s %s", (password_data + i)->password, (password_data + i)->hash); //Armazena a senha e hash da struct "string" password_data[i].
        i++;
    }
    fclose(a); //Fecha o arquivo a, pois já pegamos todas as informações necessárias.
}