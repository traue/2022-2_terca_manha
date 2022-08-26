/*1. Faça um programa em C que leia um número real e calcule o 
quadrado deste número. Ao final, o programa deve imprimir o 
resultado do cálculo.*/

#include <stdio.h>

int main() {
    float num;
    printf("Informe um número: ");
    scanf("%f", &num);
    printf("O quadrado deste número é: %.2f", (num * num));
    return 0;
}