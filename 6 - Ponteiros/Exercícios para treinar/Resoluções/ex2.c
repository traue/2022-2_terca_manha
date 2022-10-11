/*
    2. Elabore um programa que leia um valor do tipo inteiro e, por meio de
    função, atualize todas as posições de um vetor com o número inteiro lido,
    depois imprima os valores. Utilize ponteiros para as operações.
*/

#include <stdio.h>


void atualizaVetor(int *vet, int num, int tamanhoVetor) {
    int *p;
    for (int i = 0; i < tamanhoVetor; i++) {
        p = &vet[i];
        *p = num;
    }
}

int main() {

    int tamanhoVetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    int numeros[tamanhoVetor], num, *p;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    atualizaVetor(numeros, num, tamanhoVetor);

    for (int i = 0; i < tamanhoVetor; i++) {
        p = &numeros[i];
        printf("\nValor da %dª posição: %d", (i + 1), *p);
    }

    return 0;
}