/*
    [ATIVIDDE] 6. Usando a estrutura retângulo do exercício 4, faça um programa que declare 
    e leia uma estrutura retângulo e um ponto, e informe se esse ponto está ou não dentro do
    retângulo.
*/

#include <stdio.h>

struct ponto {
    int x, y;
};

struct retangulo {
    struct ponto pA; //Superior esquerdo
    struct ponto pB; //Inferior direito
};

typedef struct retangulo Retangulo;
typedef struct ponto Ponto;

int main() {

    //variáveis
    Ponto p;        //este é o que verificaremos se está dentro ou fora do retângulo
    Retangulo ret;  //representará nosso retângulo

    //leituras
    printf("Do retângulo, informe a coordenada X do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &ret.pA.x);

    printf("Do retângulo, informe a coordenada y do ponto SUPERIOR ESQUERDO: ");
    scanf("%d", &ret.pA.y);

    printf("\n");

    printf("Do retângulo, informe a coordenada X do ponto INFERIOR ESQUERDO: ");
    scanf("%d", &ret.pB.x);

    printf("Do retângulo, informe a coordenada y do ponto INFERIOR ESQUERDO: ");
    scanf("%d", &ret.pB.y);

    printf("\n");

    printf("Informe a coordenada X do ponto a ser verificado: ");
    scanf("%d", &p.x);

    printf("Informe a coordenada Y do ponto a ser verificado: ");
    scanf("%d", &p.y);

    //análise
    //1. caso o Ponto esteja sobre as "retas" do retângulo -> Está dentro
    printf("\nConsiderando que está dentro se o ponto estiver inclusive sobre as retas: ");
    if (p.x >= ret.pA.x && p.x <= ret.pB.x && p.y >= ret.pB.y && p.y <= ret.pA.y) {
        printf("\nO ponto está DENTRO do retângulo!");
    } else {
        printf("\nO ponto está FORA do retângulo!");
    }

    //2. caso o Ponto esteja sobre as "retas" do retângulo -> Está forta
    printf("\nConsiderando que está fora se o ponto estiver inclusive sobre as retas: ");
    if (p.x > ret.pA.x && p.x < ret.pB.x && p.y > ret.pB.y && p.y < ret.pA.y) {
        printf("\nO ponto está DENTRO do retângulo!");
    } else {
        printf("\nO ponto está FORA do retângulo!");
    }

    return 0;
}

