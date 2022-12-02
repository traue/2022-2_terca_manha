#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

typedef struct No no;
int tamanho;

void inicializaFila(no *FILA);
int menu();
void escolhaMenu(no *FILA, int opc);
void inserirElemento(no *FILA);
no *removerElemento(no *FILA);
no *criaNo();
int estaVazia(no *FILA);
void exibirFila(no *FILA) ;
void libera(no *FILA);

int main() {

    no *FILA = (no *) malloc(sizeof(no));

    if (!FILA) {
        printf("Sem espaço disponível na memória!");
        exit(1);
    }

    inicializaFila(FILA);

    int opc;
    do {
        opc = menu();
        escolhaMenu(FILA, opc);
    } while(opc);

    return 0;
}

void inicializaFila(no *FILA) {
    FILA->prox = NULL;
    tamanho = 0;
}

int menu() {
    int opc;
    printf("Escolha uma opção: \n");
    printf("0 - Sair\n");
    printf("1 - Zerar Fila\n");
    printf("2 - Mostrar Fila\n");
    printf("3 - Adicionar elemento à Fila (final)\n");
    printf("4 - Remover elemento da Fila (início)\n");
    printf(">> Opção: ");
    scanf("%d", &opc);
    return opc;
}

void escolhaMenu(no *FILA, int opc) {
    no *ultimoRemovido;
    switch (opc) {
        case 0: 
            libera(FILA);
            exit(0);
            break;
        case 1:
            libera(FILA);
            inicializaFila(FILA);
            printf("\n >> Fila zerada!\n");
            break;
        case 2:
            exibirFila(FILA);
            break;
        case 3:
            inserirElemento(FILA);
            break;
        case 4:
            ultimoRemovido = removerElemento(FILA);
            if (ultimoRemovido != NULL) {
                printf("\n >> Retirado: %d\n", ultimoRemovido->valor);
                libera(ultimoRemovido);
            }
            break;
        default:
            printf("\n\nOpção inválida!\n\n");
    }
}

void inserirElemento(no *FILA) {
    no *novo = criaNo();
    if (estaVazia(FILA)) {
        FILA->prox = novo;
        return;
    } else {
        no *temp = FILA->prox;
        while(temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    tamanho++;
}

no *removerElemento(no *FILA) {
    if (estaVazia(FILA)) {
        printf("\n >> A fila está vazia! Nada a remover!");
        return NULL;
    }
    no *noRemovido = FILA->prox;
    FILA->prox = noRemovido->prox;
    noRemovido->prox = NULL;
    tamanho--;
    return noRemovido;
}

no *criaNo() {
    no *novoNo = (no *) malloc(sizeof(no));
    if (!novoNo) {
        printf("Sem memória disponível!\n");
        exit(1);
    }
    printf("\n >> Novo elemento: ");
    scanf("%d", &novoNo->valor);
    novoNo->prox = NULL;
    return novoNo;
}

int estaVazia(no *FILA) {
    return FILA->prox == NULL;
}

void libera(no *FILA) {
    if (!estaVazia(FILA)) {
        no *atual;
        no *proxNo;

        atual = FILA->prox;
        while (atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void exibirFila(no *FILA) {
    if (estaVazia(FILA)) {
        printf("\nA fila está vazia!\n\n");
        return;
    }
    no *temp;
    temp = FILA->prox;
    printf("\nFILA: ");
    while (temp != NULL) {
        printf("%5d", temp->valor);
        temp = temp->prox;
    }
    printf("\n        ");

    for (int i = 0; i <= tamanho; i++)
        printf("  ^  ");
    printf("\nOrdem:");
    for (int i = 0; i <= tamanho; i++)
        printf("%5d", i + 1);

    printf("\n\n");
}