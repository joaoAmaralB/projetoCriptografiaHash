#ifndef ERRO_H
#define ERRO_H

#include "def.h" // Inclusão do header das structs para serem usadas nas funções.
void missing_error(int a); //Função para quando faltam arquivos.
void file_error(FILE* a); //Função para quando algum arquivo não pode ser aberto.
void dynamicU_error(user*); //Função para quando a memória não pode ser alocada para o primeiro arquivo.
void dynamicP_error(password*); //Função para quando a memória não pode ser alocada para o segundo arquivo.

#endif