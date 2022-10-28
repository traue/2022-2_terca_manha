
#include <stdio.h>

int buscaLinear(int v[], int tamanho, int vBuscado) {
    for (int i = 0; i < tamanho && v[i] <= vBuscado; i++) {
        if (v[i] == vBuscado)
            return i; //a posição que encntrou o valor
    }
    return -1; //-1 não encontrou
}

int buscaLinear2(int v[], int tamanho, int vBuscado) {
    int indice = 0;
    while (indice < tamanho && v[indice] < vBuscado)
        indice++;
    if (indice >= tamanho || v[indice] != vBuscado)
        return -1;
    return indice;
}

int main() {

    int n, valorBuscado;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n]; //vetor de tamanho N, definido pelo usu

    //preenchimento do vetor
    for (int i = 0; i < n; i++) {
        printf("Informe valor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nQual valor deseja buscar: ");
    scanf("%d", &valorBuscado);

    int indiceValorBuscado = buscaLinear(v, n, valorBuscado);
    int indiceValorBuscado2 = buscaLinear2(v, n, valorBuscado);

    printf("\nIndive do valor buscado: %d", indiceValorBuscado);
    printf("\nIndive do valor buscado 2: %d", indiceValorBuscado);

    return 0;
}