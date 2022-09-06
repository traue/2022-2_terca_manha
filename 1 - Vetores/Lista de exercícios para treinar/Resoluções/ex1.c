// Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que 
// o usuário digite um número inteiro para ser buscado no vetor. Se for encontrado o
// programa deve imprimir a posição desse número no vetor, caso contrário, deve imprimir 
// a mensagem: "Nao encontrado!"

#include <stdio.h>

int main() {

    int v[15], vBusca, aux = 0;

    printf("Digite os 15 valores do vetor...: \n");

    for (int i = 0; i < 15; i++) {
        printf("Informe o %dº valor: ", (i + 1));   
        scanf("%d", &v[i]);
    }

    //para limpar o console
    //de https://stackoverflow.com/questions/2347770/how-do-you-clear-the-console-screen-in-c
    printf("\e[1;1H\e[2J");  

    printf("\nQual valor você quer procurar: ");
    scanf("%d", &vBusca);

    for(int i = 0; i < 15; i++) {
        if(v[i] == vBusca) {
            printf("\nValor encontrado na posição %d", (i + 1));
            aux++;
            //break; //se quiser que pare o laço ao encontrar o primeiro
        }
    }

    if(aux == 0) {
        printf("\nNão encontrado!");
    }

    return 0;
}