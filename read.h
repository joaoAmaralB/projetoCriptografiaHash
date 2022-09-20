#ifndef LEITURA_H
#define LEITURA_H

#include "def.h" // Inclusão do header das structs para serem usadas nas funções.
int read_size(FILE *b); //Função que le o tamanho do arquivo b.
void store_user(FILE *b, user *); //Função que armazena o nome e a senha criptografada do primeiro arquivo.
void store_password(FILE *a, password *); //Função que armazena a senha e o hash do segundo arquivo.

#endif
