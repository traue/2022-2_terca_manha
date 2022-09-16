/* SOLUÇÃO SENSACIONAL DO ERICKÃO (EX3) */
#include <stdio.h>

int main(void)
{
    // variaveis necessarias para a matriz
    int matriz[2][3];
    // Leitura de dados na matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\nValor da matriz (%d,%d): ", (i + 1), (j + 1));
            scanf("%d", &matriz[i][j]);
        }
    }

    // imprime o valor da matriz C.
    printf("\nMatriz C: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprime o valor da matriz Ct.
    printf("\nMatriz Ct: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}