/*
6. Faça um programa que leia os catetos (dois catetos) de um 
triângulo retângulo e imprima a hipotenusa. Para fazer o cálculo,
implemente uma função. Utilize a fórmula a seguir.

    h = RAIZ(QUADRADO(cateto1) + QUADRADO(cateto2))
    OU a² + b² = c²
*/

#include <stdio.h>
#include <math.h>

float hipotenusa(float catetoOposto, float catetoAdjacente) {
    return sqrt(pow(catetoAdjacente, 2) + pow(catetoOposto, 2));
}

int main() {

    float catOposto, catAdjancente;

    printf("Informe o cateto oposto: ");
    scanf("%f", &catOposto);

    printf("Informe o cateto adjacente: ");
    scanf("%f", &catAdjancente);

    printf("A hipotenusa deste triângulo retângulo é %.2f", 
        hipotenusa(catOposto, catAdjancente));
        
}