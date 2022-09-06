/*
    5. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o
    maior e o menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor.
*/

#include <stdio.h>

int main() {
    int n = 10;

    int v[n], maior, menor;
    float media = 0, pares = 0, percentPares;

    printf("Inicie a digitação de %d valores...\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d valor: ", (i + 1));
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for(int i = 0; i < n; i++) {
        //para achar o maior
        if(v[i] > maior) 
            maior = v[i];

        //para achar o menor:
        if(v[i] < menor) 
            menor = v[i];

        //início do cálculo da média (soma de todos os valores):
        media += v[i];

        //contagem de pares:
        if(v[i] % 2 == 0)
            pares++;
    }

    percentPares = (pares / n) * 100;
    media /= n;

    printf("\nMenor elemento do vetor: %d", menor);
    printf("\nMaior elemento do vetor: %d", maior);
    printf("\nMédia dos elementos: %.2f", media);
    printf("\nPorcentagem de números pares: %.2f", percentPares);

    return 0;
}