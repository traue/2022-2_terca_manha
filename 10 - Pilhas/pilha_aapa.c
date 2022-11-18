#include <stdio.h>
#include <stdlib.h>

struct Pilha {
    int topo;
    int capacidade;
    float *pElem;
};

void criaPilha(struct Pilha *p, int capacidade);
int estaVazia(struct Pilha *pilha);
int estaCheia(struct Pilha *pilha);
void empilhar(struct Pilha *p);
float desempilhar(struct Pilha *pilha);
float top(struct Pilha *p);
void mostraPilha(struct Pilha *p);

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
        printf("\n4 - Mostrar pilha");
        printf("\n5 - Sair");
        printf("\nOpção: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1: //empilhar (PUSH)
                empilhar(&pilha);
                break;
            case 2: //desempilhar (POP)
                if (estaVazia(&pilha)) {
                    printf("\nA pilha já está vazia!\n\n");
                    break;
                }
                valor = desempilhar(&pilha);
                printf("\nDesempilhado: %f\n\n", valor);
                break;
            case 3: //mostrar elemento do topo (top)
                if (estaVazia(&pilha)) {
                    printf("\nA pilha está vazia! Não há nenum elemento no topo!\n\n");
                    break;
                }
                valor = top(&pilha);
                printf("\nValor do topo: %f\n\n", valor);
                break;
            case 4: //mostra a pilha
                mostraPilha(&pilha);
                break;
            case 5: //sair
                free(pilha.pElem); //todo: rever
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

void empilhar(struct Pilha *p) {
    if(!estaCheia(p)) {
        printf("\nInforme um valor: ");
        float valor;
        scanf("%f", &valor);

        p->topo++;
        p->pElem[p->topo] = valor;
        printf("\n%f empilhado!\n", valor);
        return;
    }
    printf("\nA pilha já está cheia!\n\n");
}

float desempilhar(struct Pilha *pilha) {
    float valor = pilha->pElem[pilha->topo];
    pilha->topo--;
    return valor;
}

float top(struct Pilha *p) {
    return p->pElem[p->topo];
}

void mostraPilha(struct Pilha *p) {
    if (!estaVazia(p)) {
        for (int i = p->topo; i >= 0 ; i--) {
            printf("%4d > ", i);
            printf("%f\n", p->pElem[i]);
        }
        return;
    }
    printf("\nA pilha está vazia! Impossível imprimir!\n\n");
}