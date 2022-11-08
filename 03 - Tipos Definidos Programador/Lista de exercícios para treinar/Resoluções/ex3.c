/*
    3. Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a 
    distância entre eles, considere a mesma fórmula do exercício anterior.
*/

#include <stdio.h>
#include <math.h>

struct ponto {
    int x, y;
};


int main() {

    //variáveis necessárias
    struct ponto pA, pB;
    float distancia;

    printf("Do ponto A, informe a coordenada X: ");
    scanf("%d", &pA.x);

    printf("Do ponto A, informe a coordenada Y: ");
    scanf("%d", &pA.y);

    printf("\nDo ponto B, informe a coordenada X: ");
    scanf("%d", &pB.x);

    printf("Do ponto B, informe a coordenada Y: ");
    scanf("%d", &pB.y);

    //cálculo da distância
    //d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB - YA)))
    distancia = sqrt((pow(pB.x - pA.x, 2)) + (pow(pB.y - pA.y, 2)));

    //impressão do resultado
    printf("A distância entre A(%d,%d) e B(%d,%d) é %.2f",
        pA.x, pA.y, pB.x, pB.y, distancia);


    return 0;
}
