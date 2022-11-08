#include <stdio.h>

int main(void)
{
    int matriz[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nInforme o numero da matriz (%d,%d): ", (i + 1), (j + 1));
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("Matriz: A \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz: B \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] *= 3; // calculo do triplo da matriz
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}