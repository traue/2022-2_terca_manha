#include <stdio.h>

int main() {
    int *pNum; //declaração de um ponteiro
    int n1, n2; //dois inteiros comuns
    pNum = &n1; //aponta pNum para n1
    *pNum = 10; //atribui valor a pnum por apontamento
    n2 = 20; //atribui um valor qualquer a n2

    printf("\nConteúdo de N1: %d", n1); //10
    printf("\nEndereço de N1: %p", &n1); //0x16b79b074

    printf("\n-------");

    printf("\nConteúdo de N2: %d", n2); //20
    printf("\nEndereço de N2: %p", &n2); //0x16b79b070

    printf("\n-------");

    printf("\nConteúdo de pNum: %p", pNum); //0x16b79b074
    printf("\nConteúdo do apontamento de pNum: %d", *pNum); //10
    printf("\nEndereço de pNum: %p", &pNum); //0x16b79b078

    printf("\nAlterei n1 para 40...:");
    n1 = 40;
    printf("\nConteúdo de N1: %d", n1); //40
    printf("\nConteúdo do apontamento de pNum: %d", *pNum); //40

    printf("\nAlterei o conteúdo apontado de pNum para 666...:");
    *pNum = 666;
    printf("\nConteúdo de N1: %d", n1); //666
    printf("\nConteúdo do apontamento de pNum: %d", *pNum); //666
    
}