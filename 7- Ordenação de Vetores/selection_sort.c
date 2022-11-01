/*Algoritmo de ordenação por seleção (seleciotn sot)*/

#include <stdio.h>

void imprimeVetor(int v[], int n) {
    printf("\n Vetor: [");
    for (int i = 0; i < n; i++) {
        printf("%3d ", v[i]);
    }
    printf("]");
}

void selectionSort(int v[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[i]) {
                int temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
}

int main() {
    int x[] = {4, 2, 3, 7, 0, 9, 1, 5, 66};

    imprimeVetor(x, 9);

    selectionSort(x, 9);

    imprimeVetor(x, 9);

    return 0;
}
