/*  A sequência de Fibonacci é a sequência de inteiros: 
        0,1,1,2,3,5,8,13,21,34,.... 
    Implemente uma função recursiva que calcule e imprima 
    todos os elementos da série Fibonacci de 0 até n. 
    Em que, n deve ser informado pelo usuário do programa.
*/

#include <stdio.h>

int fibonacci(int num) {
    if (num == 1 || num == 2) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int n;

    printf("Informe o número de termos de Fibonacci: ");
    scanf("%d", &n);

    printf("\nA sequência de Fibonacci é: 0, ");

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d \n", fibonacci(i + 1));
        } else {
            printf("%d, ", fibonacci(i + 1));
        }
    }

    return 0;
}