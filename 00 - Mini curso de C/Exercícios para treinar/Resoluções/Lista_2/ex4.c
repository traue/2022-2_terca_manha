/*
4. Faça um programa em C que leia um número e imprima uma das mensagens:
"Maior do que 20", "Igual a 20" ou "Menor do que 20".
*/

#include <stdio.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if (valor > 20) {
        printf("É maior que vinte!");
    } else if (valor == 20) {
        printf("É igual a vinte!");
    } else {
        printf("\nÉ menor que vinte!");
    }

    return 0;
}
