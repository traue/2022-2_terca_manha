/*
    2. Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posições X e Y). Em seguida, declare e leia do teclado um ponto, calcule exiba 
    a distância dele até a origem das coordenadas, isto é, posição (0, 0).
    Para realizar o cálculo, utilize a fórmula de distância euclidiana:

        d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB - YA)))
        (vide imagem na pasta)

        Onde:
            - d = Diatância entre os pontos A e B
            - X = coordenada X em um ponto
            - Y = coordenada Y em um ponto
*/

#include <stdio.h>
#include <math.h>

struct ponto {
    int x, y;
};

int main () {

    struct ponto p;
    float distancia;

    //leitura
    printf("Informe a coordenada X do ponto: ");
    scanf("%d", &p.x);

    printf("Informe a coordenada Y do ponto: ");
    scanf("%d", &p.y);

    //calculos
    //d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB + YA)))
    distancia = sqrt(pow(p.x, 2) + pow(p.y, 2));

    //impressão dos resultados
    printf("\nA distância do ponto de origem (0,0) até (%d,%d) é %.2f", 
        p.x, p.y, distancia);

    return 0;
}