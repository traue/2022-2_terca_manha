/*
    4. Crie uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto 
    superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
    por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que 
    declare e leia uma estrutura retângulo e exiba a área, o comprimento da 
    diagonal e o perímetro desse retângulo.
*/

#include <stdio.h>
#include <math.h>

struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto pA; //Superior esquerdo
    struct ponto pB; //Inferior direito
};

typedef struct retangulo Retangulo;

int main() {

    //variáveis necessárias
    Retangulo retangulo;
    float area, diagonal, perimetro, base, altura;

    //leitura dos dados
    printf("Informe a coordenada X do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &retangulo.pA.x);

    printf("Informe a coordenada Y do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &retangulo.pA.y);

    printf("\nInforme a coordenada X do ponto INFERIOR DIREITO: ");
    scanf("%d", &retangulo.pB.x);

    printf("Informe a coordenada Y do ponto INFERIOR ESQUERDO: ");
    scanf("%d", &retangulo.pB.y);

    //calculos
    //d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB - YA)))

    base = sqrt(pow(retangulo.pB.x - retangulo.pA.x, 2));

    altura = sqrt(pow(retangulo.pA.y - retangulo.pB.y, 2));

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(retangulo.pB.x - retangulo.pA.x, 2) + 
        pow(retangulo.pB.y - retangulo.pA.y, 2));

    //exibição dos resultados:
    printf("\nBase = %.2f", base);
    printf("\nAltura = %.2f", altura);
    printf("\nÁrea =  %.2f", area);
    printf("\nPerímetro = %.2f", perimetro);
    printf("\nDiagonal = %.2f", diagonal);

    return 0;
}