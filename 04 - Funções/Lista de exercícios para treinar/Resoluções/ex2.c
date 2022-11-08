/*
    2. Faça um programa que receba as notas de três provas e calcule a
    média. Para o cálculo, escreva uma função. O programa deve 
    imprimir a média ao final.
*/

#include <stdio.h>

float calculaMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {

    //variáveis
    float nota1, nota2, nota3;

    //entrada dos dados
    printf("Informe as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //saida com a chamada da função
    printf("A média é: %f", calculaMedia(nota1, nota2, nota3));

    return 0;
}