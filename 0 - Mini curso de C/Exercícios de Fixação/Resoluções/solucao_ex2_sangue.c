#include <stdio.h>

int main(void)
{

    int idade, bemAlimentado, resfriado;
    float peso;

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    printf("\nVocê está bem alimentado(a) <1 - Sim | 0 - não>: ");
    scanf("%d", &bemAlimentado);

    printf("\nVocê está resfriado(a) <1 - Sim | 0 - não>: ");
    scanf("%d", &resfriado);

    if ((idade >= 16 && idade <= 69) && peso >= 50 && bemAlimentado && !resfriado)
    {
        printf("\nApto para doação!");
    }
    else
    {
        printf("\nInapto para doação!");
    }

    return 0;
}