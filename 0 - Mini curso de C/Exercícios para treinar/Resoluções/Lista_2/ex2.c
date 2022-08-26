/*
2.  Faça um programa em C que leia um valor e verifique se é múltiplo de 3.
*/


#include <stdio.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if(valor % 3 == 0) //módulo
        printf("É multiplo de 3!");
    else
        printf("Não é multiplo de 3!");

    return 0;
}
