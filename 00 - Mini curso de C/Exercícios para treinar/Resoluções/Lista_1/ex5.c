/*
5. Faça um programa em C que faça a conversão de uma temperatura 
lida em Celcius para Fahrenheit. Fórmula F = (9 * C + 160) / 5
*/


#include <stdio.h>

int main() {
    //declarações
    float tCelcius, tFahrenheit;

    //entradas:
    printf("\nInforme a temperatura em ºC: ");
    scanf("%f", &tCelcius);

    //processamento:
    tFahrenheit = (9 * tCelcius + 160) / 5;

    //saída:
    printf("\nTemperatura em ºF: %.2f", tFahrenheit);

    return 0;
}