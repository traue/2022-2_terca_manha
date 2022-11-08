/*
4. Faça um programa em C que calcule o reajuste do 
salário de um funcionário. Para isso, o programa deverá ler 
o salário atual do funcionário e ler o percentual de reajuste.
Ao final imprimir o valor do novo salário.

*/


#include <stdio.h>

int main() {
    //declarações

    float salarioAtual, percReajuste, novoSalario;
    
    //entradas:
    printf("Informe o salário atual: ");
    scanf("%f", &salarioAtual);

    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percReajuste);

    //processamento
    novoSalario = salarioAtual + (salarioAtual * (percReajuste / 100));

    //saída
    printf("Novo salário: %.2f", novoSalario);

    return 0;
}