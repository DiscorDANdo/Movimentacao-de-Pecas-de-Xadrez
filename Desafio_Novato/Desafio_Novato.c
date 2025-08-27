#include <stdio.h>

int main() {
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

    return 0;
}