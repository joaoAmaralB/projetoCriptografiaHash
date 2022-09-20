#include <stdio.h>
#include <string.h>
#include "read.h"

void read_maze(FILE* a, char** maze, int lines, int columns){
    int i, j = 0;
    for (i = 0; i < lines; i++){
        getc(a); //Retirando o \n do labirinto
        for(j = 0; j < columns; j++){
            fscanf(a, "%c", &maze[i][j]); //Leitura de cada char do arquivo
        }
    }

    maze[0][1] = '@';
    maze[1][1] = '@';
    fclose(a); //Fechamento do arquivo
}