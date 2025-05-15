#include <stdio.h>
#include <string.h>

// Função recursiva para movimentação da Torre
void moverTorre(char direcao[], int casas) {
    if (casas == 0) return;
    printf("Torre %s\n", direcao);
    moverTorre(direcao, casas - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(char direcao[], int casas) {
    if (casas == 0) return;
    printf("Rainha %s\n", direcao);
    moverRainha(direcao, casas - 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(char direcao[], int vertical, int horizontal) {
    if (vertical == 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Bispo diagonal %s\n", direcao);
    }
    moverBispo(direcao, vertical - 1, horizontal);
}

// Função com loops complexos para o Cavalo (duas para cima, uma para a direita)
void moverCavalo() {
    int movimentos = 2;
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= 1; j++) {
            if (i == 2 && j == 1) break; // Exemplo de controle de fluxo
            printf("Cavalo Cima\n");
        }
    }

    for (int k = 1; k <= 1; k++) {
        if (k % 2 == 0) continue;
        printf("Cavalo Direita\n");
    }
}

int main() {
    // Direções predefinidas 
    char direcaoBispo[] = "diagonal-direita-cima";
    char direcaoTorre[] = "cima";
    char direcaoRainha[] = "esquerda";
    int casasTorre = 5;
    int casasRainha = 8;
    int verticalBispo = 3;
    int horizontalBispo = 2;

    // Movimento do Bispo
    printf("\n--- Movimento do Bispo ---\n");
    moverBispo(direcaoBispo, verticalBispo, horizontalBispo);

    // Movimento da Torre
    printf("\n--- Movimento da Torre ---\n");
    moverTorre(direcaoTorre, casasTorre);

    // Movimento da Rainha
    printf("\n--- Movimento da Rainha ---\n");
    moverRainha(direcaoRainha, casasRainha);

    // Movimento do Cavalo
    printf("\n--- Movimento do Cavalo ---\n");
    moverCavalo();

    return 0;
}
