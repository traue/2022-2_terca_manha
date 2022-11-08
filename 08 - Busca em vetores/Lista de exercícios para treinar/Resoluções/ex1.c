/*
    1. Crie um programa em C que seja capaz de ler um valor
    N e criar um vetor com este tamanho. Em seguida,
    ler os dados do vetor, ordená-lo e solicitar ao usuário
    um valor a ser buscado. Verificar em qual posição o valor está.
    MAS! Você deverá persistir o vetor original e mostrar
    a posição do valor buscado no vetor original e no vetor ordenado.
    Use as buscas binária e linear nesse algoritmo.
*/

#include <stdio.h>

void printVetor(int v[], int n);
void insertionSort(int v[], int n);
int buscaLinear(int v[], int tamanho, int vBuscado);
int buscaBinaria_recursiva(int v[], int esq, int dir, int vBusca);

int main() {

    //entrada do vetor de tamanho qualquer
    int n, vInserido, vBusca, indiceLinear, indiceBinario;
    printf("Qual tamanho do vetor? ");
    scanf("%d", &n);

    int v[n], w[n];
    
    //leitura dos dados
    for (int i = 0; i < n; i++) {
        printf("\nValor da posição %d: ", i);
        scanf("%d", &v[i]);
        w[i] = v[i];
    }

    printf("Vetor V (original): ");
    printVetor(v, n);

    //ordena o vetor cópia:
    insertionSort(w, n);

    printf("Vetor W (V ordenado): ");
    printVetor(w, n);

    printf("\nValor a ser buscado: ");
    scanf("%d", &vBusca);

    indiceBinario = buscaBinaria_recursiva(w, 0, n, vBusca);

    if (indiceBinario == -1) {
        printf("\nO valor não está presente no vetor");
    } else {
        indiceLinear = buscaLinear(v, n, vBusca);
        printf("\nNo vetor original (V) o valor está no íncide: %d", indiceLinear);
        printf("\nNo vetor ordenado (W) o valor está no íncide: %d", indiceBinario);
    }

    return 0;
}

void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);
    printf("\n");
}

void insertionSort(int v[], int n) {
    int key, i, j;
    for (i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int buscaLinear(int v[], int n, int vBuscado) {
    for (int i = 0; i < n; i++) {
        if (v[i] == vBuscado)
            return i;
    }
    return -1;
}

int buscaBinaria_recursiva(int v[], int esq, int dir, int vBusca) {
    if (dir >= esq) {

        int meio = esq + (dir - esq) / 2;
        //verifica se está no meio
        if (v[meio] == vBusca)
            return meio;
        
        //se o elemento é menor que o meio, estão está à esquerda do vetor
        if (v[meio] > vBusca)
            return buscaBinaria_recursiva(v, esq, meio -1, vBusca);

        //se o elemento é menor ou igual, só pode estar à direita do vetor
        return buscaBinaria_recursiva(v, meio + 1, dir, vBusca);
    }

    return -1;
}