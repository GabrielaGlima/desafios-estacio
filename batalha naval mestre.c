#include <stdio.h>

// Desafio Batalha Naval 
// Nível mestre - Posicionamento dos Navios

/*            |    |    |              
             )_)  )_)  )_)             
            )___))___))___)\           
           )____)____)_____)\\         
         _____|____|____|____\\\__     
         \                   /         
         ^^^^^^^^^^^^^^^^^^^^^          
*/

void exibirTabuleiro(int tab[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Habilidade Cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    cone[0][2] = 1;
    cone[1][1] = 1; cone[1][2] = 1; cone[1][3] = 1;
    for (int j = 0; j < 5; j++) {
        cone[2][j] = 1;
    }

    // Habilidade Cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    cruz[0][2] = 1;
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }
    cruz[2][2] = 1;

    // Habilidade Octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    octaedro[0][2] = 1;
    octaedro[1][1] = 1; octaedro[1][2] = 1; octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Habilidade Cone:\n");
    exibirTabuleiro(cone);

    printf("Habilidade Cruz:\n");
    exibirTabuleiro(cruz);

    printf("Habilidade Octaedro:\n");
    exibirTabuleiro(octaedro);

    return 0;
}