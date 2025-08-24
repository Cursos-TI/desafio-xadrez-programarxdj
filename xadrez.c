#include <stdio.h>

int main() {
    // --------- Movimento da TORRE (5 casas para a direita) ---------
    // Utilizando a estrutura de repetição FOR
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora
    printf("\n");

    // --------- Movimento do BISPO (5 casas na diagonal para cima e à direita) ---------
    // Utilizando a estrutura de repetição WHILE
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Linha separadora
    printf("\n");

    // --------- Movimento da RAINHA (8 casas para a esquerda) ---------
    // Utilizando a estrutura de repetição DO-WHILE
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
