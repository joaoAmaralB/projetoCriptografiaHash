#ifndef ERRO_H
#define ERRO_H

void missing_error(int a); //Função que verifica se está faltando algum arquivo
void file_error(FILE* a, int b); //Função que verifica se foi possível abrir o arquivo
void dynamic_error(char** maze); //Função que verifica se foi possível a alocação dinâmica
#endif