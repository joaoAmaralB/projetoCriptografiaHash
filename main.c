#include <stdio.h>
#include <stdlib.h>
#include "read.h"
#include "maze.h"
#include "print.h"
#include "error.h"

int main(int argc, char* argv[]){
    char chrlines[6], chrcolumns[6];
    int lines, columns, i;
    missing_error(argc); //Verificação do total de argumentos
    FILE *maze_file = fopen(argv[1], "r"); //Abertura do arquivo de labirinto
    file_error(maze_file, 1); //Verificação da abertura do arquivo
    fscanf(maze_file, "%s %s", chrlines, chrcolumns); //Leitura das dimensões do labirinto
    lines =atoi(chrlines); //Transformação de char para int
    columns = atoi(chrcolumns); //Transformação de char para int
    char **maze = malloc(lines * sizeof(char*)); //Alocação das linhas
    for (i = 0; i < lines; i++){
        maze[i] = malloc(columns * sizeof(char)); //Alocação das colunas para cada linha
    }
    dynamic_error(maze); //Verificação da alocação
    read_maze(maze_file, maze, lines, columns); //Leitura completa do labirinto
    depth_first_search(1, 1, maze, lines, columns); //Busca por profundidade do caminho

    FILE *output = fopen(argv[2], "w"); //Abertuda do arquivo de caminho
    file_error(output, 2); //Verificação da abertura do arquivo
    write(maze, output, lines, columns); //Escrita do caminho no labirinto
    
    for(i = 0; i < lines; i++){
		free((void *)maze[i]); //Liberação da memória alocada para as colunas de cada linha
    }
	free((void *)maze); //Liberação da memória das linhas
}