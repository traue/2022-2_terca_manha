#include <stdio.h>

int buscaBinaria(int v[], int n, int vBusca) {
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (v[meio] == vBusca)
            return meio;     
        if (v[meio] < vBusca)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    return -1;
}

int main() {

    int v[] = { 2, 3, 6, 10, 14, 18 };
    int n = sizeof(v) / sizeof(v[0]);
    int vBusca = 12;
    int posicao = buscaBinaria(v, n, vBusca);

    if (posicao == -1)
        printf("\nValor não encontrado!");
    else
        printf("\nPosição do valor buscado: %d", posicao);

    return 0;
}