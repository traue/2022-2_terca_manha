/*
    Faça um programa em C que calcule por meio de uma função 
    recursiva, A * B usando a adição em que A e B são inteiros 
    não negativos
*/

//A * B = B + B + ... (A vezes)

//3 * 4 =>> 3 + 3 + 3 + 3 = 12
//4 * 3 =>> 4 + 4 + 4 = 12
//36 * 3 ==> 36 + 36 + 36 = 108
//100 * 2 ==> 100 + 100 = 200
//...

#include <stdio.h>

int calculaMultiplicacao(int a, int b) {
    if(b > 0) {
        return a + calculaMultiplicacao(a, b - 1);
    } else {
        return 0;
    }
}

int main() {
    int a, b;
    printf("Informe o A:");
    scanf("%d", &a);

    printf("Informe o B:");
    scanf("%d", &b);

    printf("Multiplicação por soma = %d", 
        calculaMultiplicacao(a, b));

    return 0;
}