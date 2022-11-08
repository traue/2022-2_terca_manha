/*
    3. Faça um programa em C que leia o valor de um ângulo em graus e 
    o converta, utilizando uma função, para radianos e ao final 
    imprima o resultado. Fórumula de conversão:

        rad = (angulo X pi) / 180

        Considere pi = 3.14
*/

#include <stdio.h>
#include <math.h>

const float pi = 3.14;

float calculaRadiano(int angulo) {
    return (angulo * pi) / 180;
}

int main() {

    //variáveis necessárias
    int angulo;

    //entrada dos dados
    printf("Informe um ângulo: ");
    scanf("%d", &angulo);

    //exibição
    printf("Este ângulo em radianos = %f", 
        calculaRadiano(angulo));

    return 0;
}