/*
    Faça um programa em C que calcule os juros de um determinado saldo com 
    base em uma taxa, ambos informados pelo usuário. O programa deve utilizar 
    uma função para calcular os juros e atualizar o saldo atual com base no 
    saldo antigo acrescido dos juros. Ao final, a aplicação deve imprimir
    o total de juros e o novo saldo. Usar ponteiros no saldo
*/

#include <stdio.h>

float calculaJuros(float *saldo, float taxa) {
    float juros;
    juros = *saldo * taxa / 100;
    *saldo += juros;
    return juros;
}

int main() {
    
    float vSaldo, vTaxa, vResultado;

    printf("Informe o saldo da conta: ");
    scanf("%f", &vSaldo);

    printf("Informe a taxa: ");
    scanf("%f", &vTaxa);

    vResultado = calculaJuros(&vSaldo, vTaxa);

    printf("\nJuros.....: %f", vResultado);
    printf("\nSaldo novo....: %f", vSaldo);

    return 0;
}