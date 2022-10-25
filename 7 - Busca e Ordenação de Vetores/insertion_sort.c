#include <stdio.h>

void insertionSort(int v[], int n) {
    int key, i, j;

    for (i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;

        //Move os elementos do vetor que são maiores que "key"
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);
    printf("\n");
}

int main() {

    int v[] = {4, 1, 2, 7, 3};
    int n = sizeof(v) / sizeof(v[0]); //para pegar o tamanho

    // printf("\nTamanho do vetor: %ld", sizeof(v));
    // printf("\nTamanho do primeiro elemento: %ld", sizeof(v[0]));
    // printf("\nQtd. de itens no vetor: %ld", sizeof(v) / sizeof(v[0]));

    printf("\nVetor original: ");
    printVetor(v, n);

    insertionSort(v, n);

    printf("\nVetor ordenado: ");
    printVetor(v, n);

    return 0;
}