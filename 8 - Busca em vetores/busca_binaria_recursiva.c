#include <stdio.h>

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

int main() {

    int v[] = { 2, 3, 6, 10, 14, 18 };
    int n = sizeof(v) / sizeof(v[0]);
    int vBusca = 6;
    int posicao = buscaBinaria_recursiva(v, 0, n - 1, vBusca);

    if (posicao == -1)
        printf("\nValor não encontrado!");
    else
        printf("\nPosição do valor buscado: %d", posicao);

    return 0;
}