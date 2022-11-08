#include <stdio.h>

int multiplica(int *multiplicando, int *multiplicador) {
    int resultado = 0;

    for(int i = 1; i <= *multiplicando; i++) {
        resultado += *multiplicador;
    }

    //*multiplicando = -1;

    return resultado;
}

int main() {
    int multiplicando, multiplicador, resultado;

    printf("Informe o multiplicando: ");
    scanf("%d", &multiplicando);

    printf("Informe o multiplicador: ");
    scanf("%d", &multiplicador);

    resultado = multiplica(&multiplicando, &multiplicador);

    printf("\nResultdo = %d", resultado);

    //printf("Valor do multiplicando: %d", multiplicando);

    return 0;
}