/*
    7. O laboratório de agropecuária da Uninove tem um termômetro de extrema precisão, 
    utilizado para aferir as temperaturas de uma estufa onde cultivam uma variedade de 
    jaca transgênica, com apenas um caroço do tamanho de uma semente de laranja.
    O problema é que este termômetro dá os resultados na escala Kelvin (K) e os 
    pesquisadores que atuam perto da estufa são americanos, acostumados com a escala
    Fahrenheit (F). Você deve criar um programa para pegar uma lista de 24 temperaturas
    em Kelvin e convertê-las para Fahrenheit. O problema maior é que esses pesquisadores
    querem que você faça essa conversão e imprima os resultados utilizando ponteiros.
    Para a conversão, observe as fórmulas a seguir:
    F = 1.8 * (K - 273) + 32
*/

#include <stdio.h>

int main() {
    float temperatura[24];
    float *pTemp;

    printf("Insira 24 temperaturas: \n");

    //leitura dos dados
    for (int i = 0; i < 24; i++) {
        printf("Temperatura %d: ", i);
        scanf("%f", &temperatura[i]);
    }

    //atualiza os valodres usando ponteiros
    for (int i = 0; i < 24; i++) {
        pTemp = &temperatura[i];
        *pTemp = 1.8 * ((temperatura[i] - 273) + 32);
    }

    //impressão das temperaturas:
    for (int i = 0; i < 24; i++) {
        pTemp = &temperatura[i];
        printf("Temperatura %d: %.4f\n", i, *pTemp);
    }

    return 0;
}