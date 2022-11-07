#include <stdio.h>


int main() {

    int num, tamanho;
    char letra;

    num = 54321; //o espaço reservado na memória independe do valor que o número possui

    tamanho = sizeof(num);
    printf("\nO espaço de memória reservado para o NUM que é um inteiro é: %d bytes", tamanho);

    tamanho = sizeof(letra);
    printf("\nTamanho em bytes do char: %d \n", tamanho);

    int v[3];
    tamanho = sizeof(v);
    printf("O vetor de tamanho 3 tem o esapaço reservado de %d bytes", tamanho);

    return 0;
}