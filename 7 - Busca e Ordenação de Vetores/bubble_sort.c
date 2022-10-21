
#include <stdio.h>

void troca(int *v1, int *v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) { //verifica se deve ou não trocar
                troca(&v[j], &v[j + 1]);
            }
        }
    }
}

void printVetor(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\n[%d] %d", i, v[i]);
    }
}

int main() {

    int v[] = {6, 4, 2, 3, 7};

    //n representa o tamanho do vetor
    int n = sizeof(v) / sizeof(v[0]);

    //imprime o vetor original
    printVetor(v, n);

    printf("\n---------\n");

    //ordena o vetor:
    bubbleSort(v, n);

    //reimprime o vetor:
    printVetor(v, n);

    return 0;
}