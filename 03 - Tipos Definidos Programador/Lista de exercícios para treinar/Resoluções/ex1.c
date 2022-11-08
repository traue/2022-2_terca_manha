/*
1. Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa 
e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da 
estrutura lida.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa {
    char nome[50];
    int idade;
    char endereco[60];
};

int main() {

    //variáveis
    struct pessoa p1;

    //leitura dos dados
    printf("\nInforme o nome da pessoa: ");
    scanf("%[^\n]%*c", p1.nome);

    printf("\nInforme o endereço da pessoa: ");
    scanf("%[^\n]%*c", p1.endereco);

    printf("\nInforme a idade da pessoa: ");
    scanf("%d", &p1.idade);

    //impressão dos dados
    printf("\nO nome da pessoa é %s", p1.nome);
    printf("\nO endereço da pessoa é %s", p1.endereco);
    printf("\nA pessoa tem %d anos!", p1.idade);

    return 0;
}