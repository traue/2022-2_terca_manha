#include <stdio.h>

int main() {

    int v[100], n, vInserido, posicaoInsercao = 0;

    printf("\nQual o tamanho do vetor (menor que 100): ");
    scanf("%d", &n);

    //entrada dos dados do vetor
    printf("\nInsira os valores de forma ordenada...");
    for (int i = 0; i < n; i++) {
        printf("\nValor da posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nValor a ser inserido:");
    scanf("%d", &vInserido);

    //determinar em qual posição devemos inserir o valor novo
    for (int i = 0; i < n; i++) {
        if (vInserido < v[i]) {
            posicaoInsercao = i;
            break;
        } else {
            posicaoInsercao = i + 1;
        }
    }

    printf("Posição em que será inserido: %d", posicaoInsercao);

    //movimentação de todos os valores subsequentes "para o lado direito"
    for (int i = n; i > posicaoInsercao; i--)
        v[i] = v[i - 1];

    v[posicaoInsercao] = vInserido;

    printf("\nVetor após a inserção do dado novo: ");
    for (int i = 0; i <= n; i++)
        printf("% 5d", v[i]);

    return 0;

}