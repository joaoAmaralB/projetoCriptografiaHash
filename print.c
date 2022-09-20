#include <stdio.h>
#include "print.h"

void write(char** maze, FILE *b, int lines, int columns){
    int i, j;
    for (i = 0; i < lines; i++){
        for (j = 0; j < columns; j++){
            if (j == (columns - 1)){ //Caso seja o final da linha
                fprintf(b, "%c\n", maze[i][j]); //Print de cada char do labirinto
            }
            else{
                fprintf(b, "%c", maze[i][j]);
            }
            
        }
    }
    fclose(b); //Fechamento do arquivo
}