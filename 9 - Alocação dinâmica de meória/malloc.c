#include <stdio.h>
#include <stdlib.h>


int main() {
    int *p;
    p = (int*)malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("Espaço insuficente!");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
         printf("Informe um valor: ");
         scanf("%d", &p[i]);
    }

    return 0;
}