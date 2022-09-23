/*
    Vamos definir nossa própria função para se calcular a área de um
    retângulo (base * altrua) e um triângulo (base * altura) / 2 
*/

#include <stdio.h>

float areaRetangulo(float base, float altura);
float areaTriangulo(float b, float a);

int main() {

    float vBase, vAltura, vArea;
    printf("Informe a base: ");
    scanf("%f", &vBase);

    printf("Informe a altura: ");
    scanf("%f", &vAltura);

    printf("\nSe isso é um retângulo, a área é %f", areaRetangulo(vBase, vAltura));
    printf("\nSe isso é um triângulo, a área é %f", areaTriangulo(vBase, vAltura));

    return 0;
}

float areaRetangulo(float base, float altura) {
    float area = base * altura;
    return area;
}

float areaTriangulo(float b, float a) {
    return (b * a) / 2;
}


