#include <stdio.h>

int main() {
    int quantidade = 0;
    // Torre
    for (int i = 0; i < 5; i++)
    {
        printf("Torre: Direita\n");
    }
    printf("\n");

    // Bispo
    for (int i = 0; i < 5; i++)
    {
        printf("Bispo: Diagonal superior esquerda\n");
    }
    printf("\n");
    
    // Rainha
    for (int i = 0; i < 8; i++)
    {
        printf("Rainha: Esquerda\n");
    }
    printf("\n");

    // Cavalo
    while (quantidade < 2) {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo: cima\n");
            quantidade++;
        }
        printf("Cavalo: esquerda\n");
    }

    return 0;
}