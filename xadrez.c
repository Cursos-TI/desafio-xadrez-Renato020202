#include <stdio.h>


int main() {
// declarando a variaveis correspondendo 1 movimento
int bispo = 1;
int torre = 1;
int rainha = 1;


    printf(" Nível Novato - Movimentação das Peças de xadrez\n");
    printf("\n");
    printf(" a vez do bispo\n"); 
    printf("\n");
// começara a vez do bispo se movimentando 5 casa a cima/direita
    do
    {
        printf("  cima/direita\n");
        bispo++;
    } 
    while  (bispo <= 5 );

    printf("\n");
    printf(" a vez da torre\n");
    printf("\n");


// começara a vez da torre se movimentando 5 casa a direita
    for(torre; torre <= 5; torre++) 
    {
        printf(" direita\n");
    }


    printf("\n");
    printf(" a vez da rainha\n");
    printf("\n");
// começara a vez da rainha  se movimentando 8 casa a esquerda
    while ( rainha <= 8)
    {
        printf(" esquerda\n");
        rainha++;
    }
    


    return 0;
}
