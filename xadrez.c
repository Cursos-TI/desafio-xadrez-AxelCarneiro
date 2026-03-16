#include <stdio.h>

/*
========================================================
FUNÇÃO RECURSIVA - TORRE
A Torre se move em linha reta.
Neste exemplo ela anda várias casas para a DIREITA.

A recursividade funciona assim:
1. imprime a direção
2. chama a própria função diminuindo o número de casas
3. para quando casas == 0
========================================================
*/
void moverTorre(int casas){

    // condição de parada da recursão
    if(casas == 0)
        return;

    printf("Direita\n");

    // chamada recursiva
    moverTorre(casas - 1);
}


/*
========================================================
FUNÇÃO RECURSIVA - RAINHA
A rainha pode mover em qualquer direção.
Neste exemplo ela anda para ESQUERDA.

Estrutura recursiva igual à da torre.
========================================================
*/
void moverRainha(int casas){

    if(casas == 0)
        return;

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


/*
========================================================
FUNÇÃO RECURSIVA - BISPO
O bispo move na diagonal (Cima + Direita).

REQUISITO DO DESAFIO:
usar RECURSIVIDADE + LOOPS ANINHADOS

Loop externo → movimento vertical
Loop interno → movimento horizontal
========================================================
*/
void moverBispo(int casas){

    if(casas == 0)
        return;

    int vertical;
    int horizontal;

    /*
    loop externo controla o movimento vertical
    */
    for(vertical = 0; vertical < 1; vertical++){

        /*
        loop interno controla o movimento horizontal
        */
        for(horizontal = 0; horizontal < 1; horizontal++){

            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}


int main(){

    /*
    ========================================================
    DEFINIÇÃO DAS QUANTIDADES DE MOVIMENTO
    ========================================================
    */

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    /*
    movimento do cavalo:
    duas casas para cima e uma para direita
    */
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    printf("Movimento da Torre:\n");

    moverTorre(casasTorre);


    printf("\nMovimento do Bispo:\n");

    moverBispo(casasBispo);


    printf("\nMovimento da Rainha:\n");

    moverRainha(casasRainha);


    /*
    ========================================================
    MOVIMENTO DO CAVALO
    ========================================================
    Movimento em L:
    2 casas para cima
    1 casa para direita

    Utilizando loops aninhados com controle de fluxo
    ========================================================
    */

    printf("\nMovimento do Cavalo:\n");

    int i, j;

    /*
    loop externo controla movimento vertical
    */
    for(i = 0; i < movimentoVertical; i++){

        printf("Cima\n");

        /*
        Quando terminar o movimento vertical
        executa o movimento horizontal
        */
        if(i == movimentoVertical - 1){

            for(j = 0; j < movimentoHorizontal; j++){

                /*
                continue apenas demonstra controle de fluxo
                */
                if(j < 0){
                    continue;
                }

                printf("Direita\n");

                /*
                break demonstra interrupção do loop
                */
                break;
            }
        }
    }

    return 0;
}