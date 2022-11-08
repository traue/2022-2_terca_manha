/*
2. Faça um programa em C que imprima todos os números de 100 até 1.
*/

#include <stdio.h>

int main() {

    //com for:
    for(int i = 100; i >= 1; i--) {
        printf("\nNúmero: %d", i);
    }

    //com while:
    int j = 100;
    while(j >= 1) {
        printf("\nNúmero com while: %d", j);
        j--;
    }

    return 0;
}