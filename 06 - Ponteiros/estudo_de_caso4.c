#include <stdio.h>

int main() {
    int *pNum; //declaração de um ponteiro
    int vet[5]; //declaração de um vetor comum
    pNum = &vet[0]; //ponteiro recebe o ENDEREÇO da posição 0 do vet
    *pNum = 10;

    pNum = vet;
    pNum[1] = 20;

    printf("\nPosição 0 do vetor: %d", vet[0]); //10
    printf("\nPosição 1 do vetor: %d", vet[1]); //20
    pNum[0] = 30;
    printf("\nAgora a posição 0 do vetor: %d", vet[0]); //10
    return 0;
}