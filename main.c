#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include "error.h"
#include "search.h"
#include "writing.h"
#include "def.h"

int main(int agrc, char* argv[]){
    //Primeira parte: Arquivo Cripto
    missing_error(agrc); //Função que verifica se existem arquivos suficientes para o programa.
    FILE *encrypted_file = fopen(argv[1], "r"); //Abertura do primeiro arquivo.
    file_error(encrypted_file); //Função que verifica se foi possível abrir o arquivo.
    int i;
    i = read_size(encrypted_file); //Função que retorna o número de linhas do arquivo 1.
    user *user_data = malloc(sizeof(user) * (i + 1)); //Alocando memória dinâmica para a struct do primeiro arquivo.
    dynamicU_error(user_data); //Verifica se foi possível a alocação.
    store_user(encrypted_file, user_data); //Armazena o nome e a senha criptografada de cada linha do arquivo.
    //Segunda parte: Arquivo hash
    FILE *precomputed_file = fopen(argv[2], "r"); //Abertura do segundo arquivo.
    file_error(precomputed_file); //Verifica se foi possível abrir o arquivo.
    int k;
    k = read_size(precomputed_file); //Número de linhas do arquivo 2.
    password *password_data = malloc(sizeof(password) * (k + 1)); //Alocando memória dinâmica para a struct do segundo arquivo.
    dynamicP_error(password_data); //Verifica se foi possível a alocação.
    store_password(precomputed_file, password_data); //Armazena a senha  e o hash de cada linha do arquivo.

    //Terceira parte: Verificação
    FILE* crack_report = fopen(argv[3], "w"); //Abertura do terceiro arquivo.
    file_error(crack_report); //Função que verifica se foi possível abrir o arquivo.
    search(k, i, user_data, password_data, crack_report); //Função que realiza a busca binária entre os dois arquivos anteriores.
    fclose(crack_report); //Fecha o arquivo de relatório.
    free(user_data); //Libera a memória alocada para o ponteiro da primeira struct.
    free(password_data); //Libera a memória alocada para o ponteiro da segunda struct.
}