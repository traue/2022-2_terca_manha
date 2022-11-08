/*
    Faça um programa em C que armazene 15 números inteiros em um vetor chamado
    NUM e imprima uma listagem dos números lidos. Utilize um laço "for"
*/

#include <stdio.h>

int main() {

    //variáveis necessárias
    int NUM[15];

    //entrada
    for(int i = 0; i < 15; i++) {
        printf("Informe o %dº valor: ", (i + 1));
        scanf("%d", &NUM[i]);
    }

    printf("\n-----veja os dados informados-----\n");

    //impressão:
    for(int i = 0; i < 15; i++) {
        printf("\nValor na %dª posição: %d", (i + 1), NUM[i]);
    }

    return 0;
}