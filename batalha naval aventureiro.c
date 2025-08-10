#include <stdio.h>

// Desafio Batalha Naval 
// Nível aventureiro - Posicionamento dos Navios

/*            |    |    |              
             )_)  )_)  )_)             
            )___))___))___)\           
           )____)____)_____)\\         
         _____|____|____|____\\\__     
         \                   /         
         ^^^^^^^^^^^^^^^^^^^^^          
*/

int main() {
    int tabuleiro[10][10] = {0};

    // Navio vertical (4 células) na coluna 1, linhas 0 a 3
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][1] = 3;
    }

    // Navio horizontal (5 células) na linha 5, colunas 3 a 7
    for (int j = 3; j <= 7; j++) {
        tabuleiro[5][j] = 3;
    }

    // Navio diagonal descendente (3 células) da posição (7,0) para (9,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][0 + i] = 3;
    }

    // Navio diagonal ascendente (3 células) da posição (9,9) para (7,7)
    for (int i = 0; i < 3; i++) {
        tabuleiro[9 - i][9 - i] = 3;
    }

    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}