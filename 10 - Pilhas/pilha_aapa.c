#include <stdio.h>
#include <stdlib.h>

void criaPilha(struct Pilha *p, int capacidade);
int estaVazia(struct Pilha *pilha);
int estaCheia(struct Pilha *pilha);

struct Pilha {
    int topo;
    int capacidade;
    float *pElem;
};

int main() {

    struct Pilha pilha;
    int capacidade, opc;
    float valor;

    printf("\nCapacidade da pilha: ");
    scanf("%d", &capacidade);
    criaPilha(&pilha, capacidade);

    while(1) {
        printf("\n1 - Empilhar (PUSH)");
        printf("\n2 - Desempilhar (POP)");
        printf("\n3 - Mostrar elemento do topo");
        printf("\n4 - Sair");
        printf("\nOpção: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Opção inválida!");
        }
    }

    return 0;
}

void criaPilha(struct Pilha *pilha, int capacidade) {
    pilha->topo = -1;
    pilha->capacidade = capacidade;
    pilha->pElem = (float *)malloc(capacidade * sizeof(float));
}

int estaVazia(struct Pilha *pilha) {
    if (pilha->topo == -1)
        return 1;
    return 0;
}

int estaCheia(struct Pilha *pilha) {
    if (pilha->topo == pilha->capacidade - 1)
        return 1;
    return 0;
}