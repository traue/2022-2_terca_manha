#include <stdio.h>
//#include <stdbool.h> //essa biblioteca serve para trabalharmos com booleanos
#include <string.h>
#include <stdlib.h>


typedef enum{true, false} bool;

struct pessoa {
    char nome[50];
    int idade;
    float saldoEmConta;
    bool fumante;
};

typedef struct pessoa Pessoa;

int main() {

    Pessoa p1;

    strcpy(p1.nome, "Gabriel Salomão");
    p1.idade = 19;
    p1.saldoEmConta = 2.99;
    p1.fumante = true;

    //imprimindo...
    if(p1.fumante) {
        printf("O cara fuma!");
    } else {
        printf("O cara não funa!");
    }

    return 0;

}