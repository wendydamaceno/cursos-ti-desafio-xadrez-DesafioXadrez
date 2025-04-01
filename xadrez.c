#include <stdio.h>

// Função recursiva para a Torre (movendo para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Direita\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo (movendo na diagonal)
void moverBispo(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Cima, Direita\n", atual);
    moverBispo(casas, atual + 1);
}

// Função recursiva para a Rainha (movendo para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Esquerda\n", casas);
    moverRainha(casas - 1);
}

// Função para movimentação do Cavalo com loops aninhados
void moverCavalo() {
    printf("Movimentação do Cavalo (duas para cima, uma para a direita)\n");
    for (int i = 1; i <= 2; i++) {
        printf("Casa %d: Cima\n", i);
    }
    for (int j = 1; j <= 1; j++) {
        printf("Casa %d: Direita\n", j);
    }
}

int main() {
    printf("\n*** Movimentação das Peças de Xadrez ***\n\n");
    
    // Movimentação Torre
    printf("Movimentação da Torre 5 casas para direita:\n");
    moverTorre(5);
    printf("\n");
    
    // Movimentação Bispo
    printf("Movimentação do Bispo 5 casas na diagonal para cima e direita:\n");
    moverBispo(5, 1);
    printf("\n");
    
    // Movimentação Rainha
    printf("Movimentação da Rainha 8 casas para a esquerda:\n");
    moverRainha(8);
    printf("\n");
    
    // Movimentação Cavalo
    moverCavalo();
    
    return 0;
}
