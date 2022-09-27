/*
    1. Faça um programa em C que leia três números e, para cada um,
    imprimir o dobro. O cálculo deverá ser realizado por uma função e 
    o resultado impresso ao final do programa.
*/

#include <stdio.h>

void dobraNumero(int n1, int n2, int n3);
int dobro(int n);

int main() {

    int v1, v2, v3;

    printf("\nDigite três valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    dobraNumero(v1, v2, v3);

    //usando a outra solução
    printf("\n...Usando uma outra solução...");
    printf("\nO dobro de %d é %d", v1, dobro(v1));
    printf("\nO dobro de %d é %d", v2, dobro(v2));
    printf("\nO dobro de %d é %d", v3, dobro(v3));

    return 0;
}

void dobraNumero(int n1, int n2, int n3) {
    printf("\nO dobro de %d é %d", n1, (n1 * 2));
    printf("\nO dobro de %d é %d", n2, (n2 * 2));
    printf("\nO dobro de %d é %d", n3, (n3 * 2));
}

int dobro(int n) {
    return n * 2;
}