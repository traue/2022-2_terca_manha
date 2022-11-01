/*1. Crie um programa em C que seja capaz de ler um vetor de tamanho 
   10, ordená-lo e em seguida solicitar ao usuário um valor a ser 
   buscado. O programa deve retornar o índice novo (após ordenação) 
   do valor ou "-1" se não encontrar.
   Pense em uma otimização para a busca, ou seja, se o valor buscado
   é menor do que o índice acessado, então não encontrou.
   Utilize a busca linear.
*/



#include <stdio.h>

int buscaLinear(int v[], int tamanho, int vBuscado) {
    for (int i = 0; i < tamanho && v[i] <= vBuscado; i++) {
        if (v[i] == vBuscado)
            return i; //a posição que encntrou o valor
    }
    return -1; //-1 não encontrou
}

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
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);
    printf("\n");
}

int main() {

    int v[10], vBusca, indiceBuscado;

    //leitura dos dados 
    printf("\nInsira 10 valores para o vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("\nValor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    //mostra o vetor original
    printf("\nVetor original:\n ");
    printVetor(v, 10);

    //ordena
    bubbleSort(v, 10);

    //mostra o vetor ordenado
    printf("\nVetor ordenado:\n ");
    printVetor(v, 10);
    
    //pede ao usuário um valor a ser procurado
    printf("\nInforme um valor a ser procurado: ");
    scanf("%d", &vBusca);

    //obtêm o índice do valro procurado através de uma busca linear otimizada
    indiceBuscado = buscaLinear(v, 10, vBusca);

    //imprime o resultado
    if (indiceBuscado == -1)
        printf("Valor não encontrado no vetor (-1)!");
    else
        printf("Indice do valor buscado: %d", indiceBuscado);

    return 0;
}
