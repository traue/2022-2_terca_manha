/*
   1. Crie um programa que contenha um vetor de inteiros com tamanho 5.
   Utilizando apenas ponteiros, leia valores e armazene neste vetor e após
   isso, imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main() {

    int vet[5], *p;

    //obtenção dos dados
    for (int i = 0; i < 5; i++) {
        p = &vet[i];
        printf("Informe o valor da %dª posição: ", (i + 1));
        scanf("%d", p);
    }

    printf("\n");

    //impressão dos dados
    for (int i = 0; i < 5; i++) {
        p = &vet[i];
        printf("Dobro de %d = %d \n", *p, *p * 2);
    }

    printf("\n");

    return 0;
}