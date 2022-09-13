//como representar uma matriz 3x4?


#include <stdio.h>

int main() {

    //para representarmos uma matriz (vetor bidimensional) de inteiros...:
    int matriz[4][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Valor da posição (%d, %d)", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}