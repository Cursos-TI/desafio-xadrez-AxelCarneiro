#include <stdio.h>

// Função principal do programa
int main() {

    // =========================================
    // DECLARAÇÃO DAS VARIÁVEIS DE MOVIMENTO
    // =========================================
    
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variáveis de controle para os loops
    int i = 0;

    // =========================================
    // MOVIMENTO DA TORRE (usando FOR)
    // A torre se move em linha reta.
    // Neste caso, simularemos 5 casas para a direita.
    // =========================================

    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================================
    // MOVIMENTO DO BISPO (usando WHILE)
    // O bispo se move na diagonal.
    // Neste caso: Cima + Direita.
    // =========================================

    printf("\nMovimento do Bispo:\n");

    i = 1;

    while(i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // =========================================
    // MOVIMENTO DA RAINHA (usando DO-WHILE)
    // A rainha pode mover em qualquer direção.
    // Neste exemplo: 8 casas para a esquerda.
    // =========================================

    printf("\nMovimento da Rainha:\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);

    // =========================================
    // FINALIZAÇÃO DO PROGRAMA
    // =========================================

    return 0;
}