/*
    4. Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos 
    componentes são os fatoriais dos respectivos componentes de vet.
*/

#include <stdio.h>

int main() {
    
    int vet[10], w[10], aux;

    printf("Digite 10 valores ...: \n");

    //leitura dos dados
    for (int i = 0; i < 10; i++) {
        printf("%dº valor: ",(i + 1));
        scanf("%d", &vet[i]);
    }

    //calculos:
    for(int i = 0; i < 10; i++) {
        aux = 1;
        if(vet[i] == 1)
            w[i] = 1;
        else {
            for(int j = 1; j < vet[i]; j++) {
                aux *= j + 1;
            }
            w[i] = aux;
        }
    }

    //imprimindo os fatoriais...:
    printf("\nFatoriais....\n");

    for(int i = 0; i < 10; i++) {
        printf("%d \t %d \n", vet[i], w[i]);
    }

    return 0;
}