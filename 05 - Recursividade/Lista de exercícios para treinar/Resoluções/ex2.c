/*
    2. Escreva uma função recursiva em C para calcular o máximo
    divisor comum de dois números, mdc(x, y).
*/

#include <stdio.h>

int mdc(int v1, int v2) {
    printf("\nmdc(%d, %d)", v1, v2);
    if(v2 == 0) {
        return v1;
    }
    return(mdc(v2, v1 % v2));
}

int main() {

    int m, n, resultado;

    printf("Para este MDC, informe o primeiro valor: ");
    scanf("%d", &m);

    printf("Para este MDC, informe o segundo valor: ");
    scanf("%d", &n);

    resultado = mdc(m,n);

    printf("\nO MDC é = %d", resultado);

    return 0;

}