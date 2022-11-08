// 2. Faça um programa em C que leia 15 números inteiros e 
// imprima a lista de valores informando 
// se cada posição armazena um valor PAR ou ÍMPAR

#include <stdio.h>

int main() {
    
    int v[15];

    printf("Digite os 15 valores do vetor...: \n");

    for (int i = 0; i < 15; i++) {
        printf("Informe o %dº valor: ", (i + 1));   
        scanf("%d", &v[i]);
    }

    printf("\nPosicao \t Valor \t Par/Ímpar\n");
    for(int i = 0; i < 15; i++) {
        if(v[i] % 2 == 0)
            printf("%d \t\t %d \t PAR\n", (i + 1), v[i]);
        else
            printf("%d \t\t %d \t ÍMPAR\n", (i + 1), v[i]);
    }

    return 0;
}