/*
3. Faça um programa em C que leia a base e altura de um 
retângulo e imprima o perímetro (2 * base + 2 * altura) e 
a área (base * altura).
*/

#include <stdio.h>

int main() {
    //declarações
    float base, altura, perimetro, area;

    //leituras:
    printf("Informe a base: ");
    scanf("%f", &base);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    //cálculos (processamento)
    perimetro = (2 * base) + (2 * altura);
    area = base * altura;

    //exibição dos resultados (saída):
    printf("\nO perímetro é: %.2f", perimetro);
    printf("\nA área é: %.2f", area);

    return 0;
}
