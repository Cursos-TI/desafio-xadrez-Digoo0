#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // definição de variável
    char direction[10];
    char direction2[10];
    char direction3[10];
    char direction4[10];
    int bispo = 1;
    int torre = 1;
    int rainha = 1;
    int cavalo = 1;

    // escolhendo a direção do bispo
    printf("Para qual direção na diagonal você quer ir com o Bispo?\n");
    printf("Digite a direção: \n");
    scanf("%s", direction);
   
    // executando o movimento
    while(bispo <= 5){
        printf("Bispo diagonal %s\n", direction);
        bispo ++;
    }

    // escolhendo a direção da torre
    printf("\nPara qual direção você quer ir com a torre?\n");
    scanf("%s", direction2);

    // executando o movimento
    do{
        printf("Torre %s\n", direction2);
        torre ++;
    } while(torre <= 5);

    // escolhendo a direção da rainha
    printf("Agora, para qual direção a rainha deve ir?\n");
    scanf("%s", direction3);

    // executando o movimento
    for (rainha = 1; rainha <=8; rainha++)
    {
        printf("Rainha %s\n", direction3);
    }

    // adicionando a função do cavalo
    printf("Para qual direção você quer ir com o Cavalo?\n");
    printf("Digite a direção: \n");
    scanf("%s", direction4);

    printf("Cavalo Cima \nCavalo Cima \n");

    for (cavalo = 1; cavalo <=2; cavalo++)
    {
        printf("Cavalo %s\n", direction4);
    }

    


    return 0;
}
