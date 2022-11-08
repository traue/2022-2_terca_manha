/*
1. Faça um programa em C que leia dois valores numéricos inteiros e 
efetue a adição. Caso o resultado seja maior que 10, apresentá-lo.
*/

#include <stdio.h>

int main()
{
    int n1, n2, soma;

    printf("Informe o 1º valor: ");
    scanf("%d", &n1);

    printf("Informe o 2º valor: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma > 10)
        printf("Soma: %d", soma);
        
    return 0;
}
