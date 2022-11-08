/*
    Faça um programa em C que leia 5 valores inteiros e 
    armazene em um vetor. Após a leitura o programa deve
    encontrar e imprimir o maior valor armazenado no vetor.
*/

#include <stdio.h>

int main() {

    //variáveis necessárias
    int valores[5], maior;

    //entrada
    for(int i = 0; i < 5; i++) {
        printf("Informe o %dº valor: ", (i + 1));
        scanf("%d", &valores[i]);
    }

    maior = valores[0];

    for(int i = 1; i < 5; i++) {
        if(maior < valores[i])
            maior = valores[i];
    }

    printf("\nMaior valor digitado: %d", maior);
}