/*
    Escreva uma função recursiva em linguagem C para 
    calcular o valor de x^n (x elevado a n)
*/
#include <stdio.h>

double potencia(int x, int n) {
    if (n == 0) 
        return 1;

    if (n > 1)
        return (x * potencia(x, n - 1));
    else
        return x;
}

int main () {
 
  int n, x;
 
    printf("Digite o valor para X: ");
    scanf("%d", &x);
    printf("Digite o valor de N (Elevado): ");
    scanf("%d", &n);
 
    printf("Resultado de %d elevado a %d: %f\n", x, n, potencia(x, n));
 
  return 0;
}
