#include <stdio.h>

// Função principal do programa
int main() {

    // ======================================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ======================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo
    int movimentoVertical = 2;   // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para esquerda

    int i;

    // ======================================================
    // MOVIMENTO DA TORRE (FOR)
    // Torre se move 5 casas para a direita
    // ======================================================

    printf("Movimento da Torre:\n");

    for(i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }


    // ======================================================
    // MOVIMENTO DO BISPO (WHILE)
    // Bispo se move na diagonal: Cima + Direita
    // ======================================================

    printf("\nMovimento do Bispo:\n");

    i = 0;

    while(i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }


    // ======================================================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // Rainha se move 8 casas para a esquerda
    // ======================================================

    printf("\nMovimento da Rainha:\n");

    i = 0;

    do {
        printf("Esquerda\n");
        i++;
    } while(i < casasRainha);


    // ======================================================
    // MOVIMENTO DO CAVALO (LOOPS ANINHADOS)
    // Movimento em "L":
    // 2 casas para baixo + 1 casa para esquerda
    //
    // Utiliza:
    // - loop FOR (externo)
    // - loop WHILE (interno)
    // ======================================================

    printf("\nMovimento do Cavalo:\n");

    // Loop FOR controla o movimento vertical (Baixo)
    for(i = 0; i < movimentoVertical; i++) {

        printf("Baixo\n");

        // Quando terminar as duas casas para baixo
        // executamos o movimento horizontal
        if(i == movimentoVertical - 1) {

            int j = 0;

            // Loop WHILE para mover uma casa para esquerda
            while(j < movimentoHorizontal) {

                printf("Esquerda\n");
                j++;
            }
        }
    }

    // ======================================================
    // FINALIZAÇÃO DO PROGRAMA
    // ======================================================

    return 0;
}