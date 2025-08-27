#include <stdio.h>

// Métodos
void moverTorre()
{
    // Torre
    for (int i = 0; i < 5; i++)
    {
        printf("Torre: Direita\n");
    }
    printf("\n");
}

void moverBispo(){
    int quantidade = 0;

    while (quantidade < 5)
    {
        printf("Bispo: cima ");
        for (int i = 0; i < 1; i++)
        {
            printf("direita \n");
        }
        quantidade++;
    }
    printf("\n");
}

void moverRainha(){
    for (int i = 0; i < 8; i++)
    {
        printf("Rainha: Esquerda\n");
    }
    printf("\n");
}

void moverCavalo(int quantidade){
    while (quantidade < 2) {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo: cima\n");
            quantidade++;
        }
        printf("Cavalo: esquerda\n");
    }
}

int main() {
    int quantidade = 0;

    // Métodos
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo(quantidade);

    return 0;
}