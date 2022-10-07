/* 
Resolução do ex1 pelo J. Victor
*/
#include <stdio.h>
int main() {
    int vet[10];
    int *pNum = vet; //declaração de um ponteiro
    for(int i =0; i<10; i++){
    printf("\nConteúdo de %d: ", i+1);
    scanf("%d", &pNum[i]); 
}
    printf("\n-------");

    for(int i=0; i<10; i++){
    printf("\nEndereço da posição %d: %p", i+1, &pNum[i]);
    printf("\nValor da posição: %d: %d", i+1, pNum[i]);
}
}
