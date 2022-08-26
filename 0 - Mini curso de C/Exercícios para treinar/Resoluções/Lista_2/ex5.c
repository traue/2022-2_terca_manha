/*
5. Faça um programa em C que leia 3 notas de um aluno, calcule a média e
diga se ele está aprovado ou não (média 6).
*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &n1);

    printf("\nInforme a 2ª nota: ");
    scanf("%f", &n2);

    printf("\nInforme a 3ª nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nMédia: %.2f", media);

    if(media >= 6)
        printf("\nAprovado!");
    else
        printf("\nReprovado");

    return 0;
}
