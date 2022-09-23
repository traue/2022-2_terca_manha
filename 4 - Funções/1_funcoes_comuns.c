/*
    Como já vimos em códigos pasados, o C possui deiversas
    funções prontas, por exemplo: 
     - printf...
     - scanf...
     - main...
    
    Em suma uma função é util quando identificamos trechos
    de código-fonte que, em geral, poderão ser reutilizados
    em vários trechos de nosso programa. Servem para FACILITAR
    a vida do programador e organizar melhor nosso código

    Para estudarmos funções, vamore (re)ver algumas prontas..
*/

#include <stdio.h>
#include <math.h>

//o próprio "main" é uma função
int main() {

    float numero, raiz, potencia;
    int expoente;

    printf("Informe um número: "); //função de impressão no console
    scanf("%f", &numero); //função para entrad de dados via console

    printf("Informe um expoente: ");
    scanf("%d", &expoente);

    //raiz quadrada
    raiz = sqrt(numero);

    //para clcular a potenciação em C....:
    //pow precisa de DOIS parâmetros. a base e o expoência, ou seja um número elevado a outro
    potencia = pow(numero, expoente);

    printf("\nA raíz deste número é %.2f", raiz);
    printf("\nEste número elevado a %d é %f", expoente, potencia);

    return 0;
}