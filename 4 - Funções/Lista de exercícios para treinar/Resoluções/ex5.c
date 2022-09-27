/*
5. Faça um programa que leia o lado de um quadrado e imprima o 
perímetro, a área e a diagonal. Para fazer o cálculo, implemente 
três funções, cada uma deve realizar um cálculo especifico 
conforme solicitado. Utilize as fórmulas a seguir.

    Perímetro = 4 * lado;
    area = QUADRADO(lado);
    diagonal = lado * RAIZ(2);
*/

#include <stdio.h>
#include <math.h>

int perimetroQuadrado(int lado) {
    return 4 * lado;
}

int areaQuadrado(int lado) {
    //return lado * lado; //OU
    return pow(lado, 2);
}

float diagonalQuadrado(int lado) {
    return lado * sqrt(2);
}

int main() {
    int lado;

    printf("Informe o lado do quadrado: ");
    scanf("%d", &lado);

    printf("\nPerímetro: %d", perimetroQuadrado(lado));
    printf("\nÁrea: %d", areaQuadrado(lado));
    printf("\nDiagonal: %.2f", diagonalQuadrado(lado));

    return 0;
}