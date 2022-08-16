/*

    Nosso mini desafio de agora é criar uma calculadora
    bem simples, a qual o usuário entra com DOIS valores
    e ela deve mostrar as 4 operações sobre estes valores
*/
#include <stdio.h>

int main() {

    //declaração das variáveis necessárias
    float a, b;

    //entrada de dados
    printf("\nInforme o primeiro valor: ");
    scanf("%f", &a);

    printf("\nInforme o segundo valor: ");
    scanf("%f", &b);

    //declaração das vars. de resultados já com a operação:
    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao = a / b;

    //exibição dos resultados:
    printf("\nA soma de %.2f e %.2f = %.2f", a, b, soma);
    printf("\nA subtração de %.2f e %.2f = %.2f", a, b, subtracao);
    printf("\nA multiplicação de %.2f e %f = %f", a, b, multiplicacao);
    printf("\nA divisão de %.2f e %.2f = %.2f", a, b, divisao);

    return 0;
}