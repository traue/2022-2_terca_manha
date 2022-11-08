#include <stdio.h>

double fatorial(int n) {
    if (n == 1) {
        printf("\nRetornando 1....\n");
        return 1;
    }
    else {
        printf("\nEstou retornando %d * fatorial(%d)\n", n, n - 1);
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;

    printf("Informe o valor a se calcular o fatorial:");
    scanf("%d", &n);

    printf("%d! = %f", n, fatorial(n));

    return 0;
}