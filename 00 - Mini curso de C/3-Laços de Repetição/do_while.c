/*
    A sintaxe do "do..while" em português estruturado 
    seria algo assim:
    faça:
        BLOCO DE CÓDIGO
    enquanto(<condição>)

    em C:
    do {
        //código
    } while(<condição booleana>);

    Para entendermos melhor:

    Faça um programa em linguagem C que permita entrar 
    com números e imprimir o quadrado de cada número 
    digitado até entrar um número múltiplo de 6 que
    deverá ter seu quadrado impresso também.

*/

#include <stdio.h>

int main() {
    
    int num; //este será o número lido

    printf("Inicie a digitação de números...\n");

    do {
        printf("\nInforme um número ou um múltiplo de 6 para terminar: ");
        scanf("%d", &num);
        printf("Quadrado de %d = %d", num, (num * num));
    } while((num % 6) != 0); 
    
    printf("\nFinalizado!");

    return 0;
}