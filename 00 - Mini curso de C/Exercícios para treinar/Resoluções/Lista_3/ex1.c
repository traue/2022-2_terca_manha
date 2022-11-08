/*
1. Faça um programa em C que imprima todos os números de 1 até 100.
*/

#include <stdio.h>

int main() {

    //com for:
    for(int i = 1; i <= 100; i++) {
        printf("\nNúmero: %d", i);
    }

    //com while:
    int j = 1;
    while(j <= 100) {
        printf("\nNúmero com while: %d", j);
        j++;
    }

    return 0;
}