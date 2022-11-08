/*
    3. Faça um programa que receba dois valores inteiros, após receber esses
    dois valores, uma função deve calcular e retornar para o programa o 
    resultado da soma e da subtração dos valores.
    Obs.: Apenas uma função deve realizar esta operação, desta forma, 
    faça uso de ponteiros.
*/

#include <stdio.h>

void somaSubtrai(int valor1, int valor2, int *pSoma, int *pSub) {
    *pSoma = valor1 + valor2;
    *pSub = valor1 - valor2;
}

int main() {
    
    int v1, v2, soma, subtracao;

    printf("Informe o 1º valor: ");
    scanf("%d", &v1);

    printf("Informe o 2º valor: ");
    scanf("%d", &v2);

    somaSubtrai(v1, v2, &soma, &subtracao);

    printf("\nA soma = %d", soma);
    printf("\nA subtração = %d", subtracao);

    return 0;
}