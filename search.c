#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "search.h"
#include "def.h"
#include "writing.h"

void search(int k, int u, user *user_data, password *password_data, FILE *crack_report){
    int i, iteration, start, end, position, cond, j;

    for (i = 0; i < (u + 1); i++){ //Para mudar a linha do primeiro arquivo.
        iteration = 1; //Restauração da condição de parada do while abaixo.
        j=0; //Restauração de j.
        start = 0; //Restauração do termo inicial.
        end = k; //Restauração do termo final.

        while(iteration != 0){ //Enquanto não for achado o hash para a senha cripto da linha i.
            
            position = (start + end)/2; //Nova posição no meio de start até end.
            cond = strcmp((user_data + i)->encrypted_password, (password_data + position)->hash); //Comparação entre a senha cripto i e o hash da nova posição.

            if (cond == 0){ //Se a senha cripto for igual ao hash.
                writing(i, position, crack_report, user_data, password_data); //Vai para a função de escrita no arquivo de relatório.
                iteration = 0; //Quebra do loop while.
            }

            else if (cond > 0){ //Se a senha i for maior que o hash na nova posição.
                start = position + 1; //Como a senha não é o hash em position e é maior que ele, o início da busca vira a posição + 1.
                if (j > k){ //Para verificar se todos os hash já foram comparados com a senha cripto i.
                    break; // Caso todos os termos já tenham sido verificados e a senha não tenha sido quebrada.
                }
            }

            else if (cond < 0){ //Se a senha i for menor que o hash na nova posição.
                end = position - 1; //Como a senha não é o hash em position e é menor que ele, o final da busca vira a posição - 1.
                if (j > k){ //Para verificar se todos os hash já foram comparados com a senha cripto i.
                    break; // Caso todos os termos já tenham sido verificados e a senha não tenha sido quebrada.
                }
            }
            
            j++;
        }
        
    }
    
    
}
