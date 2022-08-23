#include <stdio.h>

int main(void) {

    //declaração das variáveis
    float peso, altura, imc;

    //leitura dos dados
    printf("\nInforme o peso: ");
    scanf("%f", &peso);

    printf("\nInforme a altura: ");
    scanf("%f", &altura);

    //cálculo do IMC:
    imc = peso / (altura * altura);

    //impressão do resultado:
    printf("IMC = %.2f", imc);

    //ficou como "desafio" montar a classificação

    
    return 0;
}