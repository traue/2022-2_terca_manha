/*
    2. Crie um programa em C que seja capaz de ler um vetor de tamanho qualquer,
    ordená-lo e, em seguida, solicitar ao usuário um novo valor a ser inserido.
    Este processo de inserção deverá ocorrer no local correto com
    redimencionamento do vetor (sem reordená-lo).
    O programa deve imprimir o vetor orignial, ordenado e o novo vetor com o 
    valor inserido.
    Utilize funções e ponteiros se necessário.
*/

#include <stdio.h>

void insereEmVetorOrdenado(int v[], int n, int vInserido);
void printVetor(int v[], int n);
void selectionSort(int v[], int n);

int main() {

    //entrada do vetor de tamanho qualquer
    int n, vInserido;
    printf("Qual tamanho do vetor? ");
    scanf("%d", &n);

    int v[n + 1];
    
    //leitura dos dados
    for (int i = 0; i < n; i++) {
        printf("\nValor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    //print do vetor original
    printf("Vetor original: ");
    printVetor(v, n);

    //ordena o vetor
    selectionSort(v, n);

    //print do vetor ordenado
    printf("Vetor ordenado: ");
    printVetor(v, n);

    //pede ao usuário um valor a ser inserido no vetor ordenado
    printf("Qual valor deve ser inserido? ");
    scanf("%d", &vInserido);

    //insere
    insereEmVetorOrdenado(v, n, vInserido);

    //imprime novamente
    printf("Vetor ordenado com o valor insserido: ");
    printVetor(v, n + 1);

    return 0;
}

void insereEmVetorOrdenado(int v[], int n, int vInserido) {
    int posicaoInsercao = 0;

    //determinar em qual posição devemos inserir o valor novo
    for (int i = 0; i < n; i++) {
        if (vInserido < v[i]) {
            posicaoInsercao = i;
            break;
        } else {
            posicaoInsercao = i + 1;
        }
    }

    printf("\nPosição em que será inserido: %d\n", posicaoInsercao);

    //movimentação de todos os valores subsequentes "para o lado direito"
    for (int i = n; i > posicaoInsercao; i--)
        v[i] = v[i - 1];

    //insere na posição correta
    v[posicaoInsercao] = vInserido;
}

void printVetor(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("% 5d", v[i]);
    printf("\n");
}

void selectionSort(int v[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j] > v[i]) {
                int temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
}