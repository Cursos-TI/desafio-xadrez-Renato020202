#include <stdio.h>

//jogo de xadrez nivel mestre

// processos de recursividade
void moverbispo(int passos) {
    if (passos == 0) 
    {
        // condição de parada de movimento
        printf(" O bispo terminou o movimento...\n");
        return;
    }
        // loop externo
    for(int vertical = 0; vertical < 1; vertical++)
     {
        // loop interno
        for( int horizontal = 0; horizontal < 1; horizontal++)
        {
            printf(" direita/cima\n");
        }

    }
    // chamada recursiva
     moverbispo(passos - 1);

}

void movertorre(int casas){
if (casas == 0) 
    {
        // condição de parada de movimento
        printf(" A torre terminou o movimento...\n");
        return;
    }

    if (casas > 0)
    {
printf(" direta\n");
movertorre(casas - 1);// chamada recursiva
    }


}

void moverrainha(int casas2){

if (casas2 == 0) 
    {
        // condição de parada de movimento
        printf(" A rainha terminou o movimento...\n");
        return;
    }

    if (casas2 > 0)
    {
printf(" esquerda\n");
moverrainha(casas2 - 1);// chamada recursiva
    }
}



// SEGUE A ORDEM DO QUE SERA IMPRIMIDO
int main (){
printf("*****JOGO DE XADREZ*****\n  ");
printf("\n");



printf("A VEZ DO BISPO!\n");
printf("\n");
int bispo = 5;
moverbispo(bispo);


printf("\n");
printf("A VEZ DA TORRE!\n");
printf("\n");
int torre = 5;
movertorre(torre);


printf("\n");
printf(" A VEZ DA RAINHA!\n");
printf("\n");
int rainha = 8;
moverrainha(rainha);


int movercavalo = 1;
printf("\n");
printf("A VEZ DO CAVALO!\n");
printf("\n");

// segue o loop aninhado no cavalo
while  (  movercavalo--  )
    {
        for( int cavalo = 1; cavalo <=2; cavalo++)
        {
            printf("cima\n");
        }
        printf("direita\n");
        
    }
printf("o cavalo finalizou o movimento\n");
printf("\n");

    
return 0;


}

 



