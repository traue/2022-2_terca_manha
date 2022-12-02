#include <stdio.h>
#include <stdlib.h>

struct Fila {
    int capacidade;
    int primeiro;
    int ultimo;
    int qtdItens;
    float *itens;
};

void criaFila(struct Fila *fila, int capacidade);
void inserir(struct Fila *fila);
float remover(struct Fila *fila);
void exibirFila(struct Fila *fila);
int estaCheia(struct Fila *fila);
int estaVazia(struct Fila *fila);
float lerValor();

int main() {

    struct Fila fila;
    int opc, capacidade;
    float valor;

    printf("\n >> Informe a capacidade da fila: ");
    scanf("%d", &capacidade);

    criaFila(&fila, capacidade);

    while (1) {
        printf("\n\nInforme a opção desejada:");
        printf("\n 1 - Inserir na fila");
        printf("\n 2 - Remover primeiro elemento");
        printf("\n 3 - Exibir a fila");
        printf("\n 4 - Sair");
        printf("\n >> Opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1: //inserção
                inserir(&fila);
                break;
            case 2: //remoção
                if (estaVazia(&fila)) {
                    printf("\n >> A fila está vazia! Nada a remover!");
                } else {
                    valor = remover(&fila);
                    printf("\n >> Removido o valor: %.2f", valor);
                }
                break;
            case 3: //exibição
                exibirFila(&fila);
                break;
            case 4:
                free(fila.itens);
                exit(0);
            default:
                printf("\n >> Opção incorreta!");
                break;
        }
    }

    return 0;
}

void criaFila(struct Fila *fila, int capacidade) {
    fila->capacidade = capacidade;
    fila->primeiro = 0;
    fila->ultimo = -1;
    fila->qtdItens = 0;
    fila->itens = (float *)malloc(capacidade * sizeof(float));

    if (!fila) {
        printf("\n\n >> Sem memória suficiente para criação da fila!");
        exit(1);
    }
}

void inserir(struct Fila *fila) {
    if (!estaCheia(fila)) {
        float valor = lerValor();

        if (fila->ultimo == fila->capacidade - 1)
            fila->ultimo = -1;

        fila->ultimo++;
        fila->qtdItens++;
        fila->itens[fila->ultimo] = valor;

        return;
    }

    printf("\n >> A fila já está cheia!");
}

float remover(struct Fila *fila) {
    //item receberá o "primeiro" elemento e, em seguida,
    //o primeiro será incrementado
    float item = fila->itens[fila->primeiro++];
    
    if (fila->primeiro == fila->capacidade)
        fila->primeiro = 0;

    fila->qtdItens--;
    return item;
}

void exibirFila(struct Fila *fila) {
    if (!estaVazia(fila)) {
        int cont, i;
        printf("\n >> | ");

        for(cont = 0, i = fila->primeiro; cont < fila->qtdItens; cont++) {
            printf(" %.2f | ", fila->itens[i++]);

            if (i == fila->capacidade)
                i = 0;
        }
        printf("\n\n");
        return;
    }
    printf("\n >> A fila está vazia! Não há nada para mostrar!");
}

float lerValor() {
    float v;
    printf("\n >> Informe um vlaor: ");
    scanf("%f", &v);
    return v;
}

int estaCheia(struct Fila *fila) {
    return fila->qtdItens == fila->capacidade;
}

int estaVazia(struct Fila *fila) {
    return fila->qtdItens == 0;
}