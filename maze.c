#include <stdio.h>
#include <stdbool.h>
#include "maze.h"

bool depth_first_search(int i, int j, char** maze, int N, int M){
    bool result;
    if (i == (N-1) && j == (M-2)){ //Se a busca chegar ao final do labirinto
        maze[i][j] = '@';
        return true;
    }
    if(maze[i+1][j] == ' '){ //Se é possível ir para baixo
        maze[i+1][j] = '@';
        result = depth_first_search(i+1, j, maze, N, M); //Chamada recursiva para a próxima etapa do caminho
        if (result){ //Caso o próximo passo seja possível
            return true;
        }
    }
        if (maze[i-1][j] == ' '){ //Se é possível ir para cima
        maze[i-1][j] = '@';
        result = depth_first_search(i-1, j, maze, N, M); //Chamada recursiva para a próxima etapa do caminho
        if (result){ //Caso o próximo passo seja possível
            return true;
        }
    }
    if(maze[i][j+1] == ' '){ //Se é possível ir para a direita
        maze[i][j+1] = '@';
        result = depth_first_search(i, j+1, maze, N, M); //Chamada recursiva para a próxima etapa do caminho
        if (result){ //Caso o próximo passo seja possível
            return true;
        }
    }
    if(maze[i][j-1] == ' '){ //Se é possível ir para a esquerda
        maze[i][j-1] = '@';
        result = depth_first_search(i, j-1, maze, N, M); //Chamada recursiva para a próxima etapa do caminho
        if (result){ //Caso o próximo passo seja possível
            return true;
        }
    }
    maze[i][j] = ' '; //Caso não seja possível o caminho feito, desmarca o passo
    return false; //Retorna que não é possível o caminho
}
