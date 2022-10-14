
#include <stdio.h>

int buscaLinear(int v[], int tamanho, int vBuscado) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == vBuscado)
            return i; //a posição que encntrou o valor
    }
    return -1; //-1 não encontrou
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

    printf("\nÍndive do valor buscado: %d", indiceValorBuscado);

    return 0;
}