/* 
    Crie uma função recursiva que receba um número inteiro 
    positivo N e calcule o somatório dos números de 1 a N
*/


// n = 4 -> 1 + 2 + 3 + 4 => 10
// n = 5 -> 1 + 2 + 3 + 4 + 5 = 15
// n = 6 -> 6 + soma(5) 
//..
//dica: n => n + soma(n-1)
#include <stdio.h>


int soma(int n) {
    if (n > 0)
        return n + soma(n - 1);
    else
        return n;
}

int soma2(int n) {
    if (n <= 1)
        return 1;
    else
        return n + soma2(n - 1);
}

int main() {
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    printf("\n(1)A some de 1 até %d é %d", n, soma(n));
    printf("\n(2)A some de 1 até %d é %d", n, soma2(n));

    return 0;
}