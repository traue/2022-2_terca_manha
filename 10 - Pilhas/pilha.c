#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

typedef struct No no;

int tamanho;

void inicializaPilha();
int estaVazia(no *PILHA);
void mostraPilha(no *PILHA);
void push(no *PILHA);
no *pop(no *PILHA);
no *aloca();
int menu();
void escolhaMenu(no *PILHA, int opc);

int main() {
    
    no *PILHA = (no * )malloc(sizeof(no));

    if (!PILHA) {
        printf("Sem memória suficiente para criação da pilha!");
        exit(1);
    }

    inicializaPilha(PILHA);

    int opc;
    do {
        opc = menu();
        escolhaMenu(PILHA, opc);
    } while(opc);

    return 0;
}

void inicializaPilha(no *PILHA) {
    PILHA->prox = NULL;
    tamanho = 0;
}

int estaVazia(no *PILHA) {
    if (PILHA->prox == NULL)
        return 1; //está vazia
    return 0; //não está vazia
}

void liberaPilha(no *PILHA) {
    if (!estaVazia(PILHA)) {
        no *atual, *proxNo;
        atual = PILHA->prox;
        while(atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void mostraPilha(no *PILHA) {
    if (estaVazia(PILHA)) {
        printf("\nA pilha está vazia!\n\n");
        return;
    }

    no *temp;
    temp = PILHA->prox;
    printf("\nPILHA:");
    while (temp != NULL) {
        printf("%5d", temp->valor);
        temp = temp->prox;
    }
    printf("\n        ");

    for (int i = 0; i < tamanho; i++)
        printf("  ^  ");
    printf("\nOrdem:");
    for (int i = 0; i < tamanho; i++)
        printf("%5d", i + 1);

    printf("\n\n\n");
}

void push(no *PILHA) {

    //cria um novo nó na memória
    no *novoNo = aloca();
    novoNo->prox = NULL; //o próximo elemento de um elemtno novo é sempre nulo

    //se a pilha está vazia, basta inserir na "base"
    if(estaVazia(PILHA)) {
        PILHA->prox = novoNo;
    } else { //caso constrário, é preciso "varrer a pilha" até descobrir o último nó (aquele que o próximo é nulo)
        no *temp = PILHA->prox;
        while(temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novoNo;
    }

    //depois de insrir, temos que aumentar o tamanho da pilha
    tamanho++;
}

no *pop(no *PILHA) {
    if (PILHA->prox == NULL) {
        printf("\n\nA Pilha já está vazia!\n\n");
        return NULL;
    }
    no *ultimo = PILHA->prox, *penultimo = PILHA;
    while (ultimo->prox != NULL) {
        penultimo = ultimo;
        ultimo = ultimo->prox;
    }
    penultimo->prox = NULL;
    tamanho--;
    return ultimo;
}

no *aloca() {
    no *novoNo = (no *) malloc(sizeof(no));
    if (!novoNo) {
        printf("Sem memória disponível!\n");
        exit(1);
    }
    printf("Novo elemento: ");
    scanf("%d", &novoNo->valor);
    //novoNo->prox = NULL;
    return novoNo;
}

int menu() {
    int opc;
    printf("Escolha uma opção: \n");
    printf("0 - Sair\n");
    printf("1 - Zerar Pilha\n");
    printf("2 - Mostrar Pilha\n");
    printf("3 - PUSH (Inserir na pilha)\n");
    printf("4 - POP (Retirar o último elemento\n");
    printf(">> Opção: ");
    scanf("%d", &opc);
    return opc;
}

void escolhaMenu(no *PILHA, int opc) {
    no *ultimoRemovido;
    switch (opc) {
        case 0:
            //liberar o espaço de memória da pilha e finalzia o programa
            liberaPilha(PILHA);
            break;
        case 1:
            liberaPilha(PILHA);
            inicializaPilha(PILHA);
            printf("\n\nVilha esvaziada!\n\n");
            break;
        case 2: 
            mostraPilha(PILHA);
            break;
        case 3:
            push(PILHA);
            break;
        case 4:
            ultimoRemovido = pop(PILHA);
            if (ultimoRemovido != NULL)
                printf("\n\nRetirado: %3d\n\n", ultimoRemovido->valor);
            break;
        default:
            printf("\n\nOpção inválida!\n\n");
    }
}