#include <stdio.h>

// Desafio Batalha Naval 
// Nível Novato - Posicionamento dos Navios

/*            |    |    |              
             )_)  )_)  )_)             
            )___))___))___)\           
           )____)____)_____)\\         
         _____|____|____|____\\\__     
         \                   /         
         ^^^^^^^^^^^^^^^^^^^^^          
*/

int main() {
    // Declarar a matriz 5x5 para o tabuleiro
    int tabuleiro[5][5] = {0};

    // Posicionar um navio vertical de 3 células na coluna 1 (índice 1), linhas 0 a 2
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 3;
        printf("Navio vertical parte em: (%d, %d)\n", i, 1);
    }

    // Posicionar um navio horizontal de 4 células na linha 3 (índice 3), colunas 0 a 3
    for (int j = 0; j < 4; j++) {
        tabuleiro[3][j] = 3;
        printf("Navio horizontal parte em: (%d, %d)\n", 3, j);
    }

    return 0;
}