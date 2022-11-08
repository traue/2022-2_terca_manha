/*
4. Faça um programa que calcule e imprima o fatorial de um número,
usando uma função que receba um valor e retorne o fatorial desse 
valor.
*/

#include <stdio.h>

double fatorial(int n) {
    double fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i; //é o mesmo que fat = fat * i
    }
    return fat;
}

int main() {

    int n;

    printf("Informe um número: ");
    scanf("%d", &n);

    printf("%d! = %lf", n, fatorial(n));

    return 0;
}