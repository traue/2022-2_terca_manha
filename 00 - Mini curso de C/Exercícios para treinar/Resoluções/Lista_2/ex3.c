/*
3. Faça um programa em C que leia um número e informe se ele é 
    divisível por 3 E por 7.

*/

#include <stdio.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if((valor % 3 == 0) && (valor % 7 == 0)) //módulo
        printf("É multiplo de 3 e 7!");
    else
        printf("Não é multiplo de 3 e 7!");

    return 0;
}