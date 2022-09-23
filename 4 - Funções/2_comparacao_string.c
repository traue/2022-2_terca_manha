#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[10] = {'R', 'o', 'm', 'u', 'l', 'i', 'n', 'h', 'o'};
    char nomeNovo[10];

    printf("Informe um nome simples: ");
    scanf("%s", &nomeNovo);

    //como comparamos se a pessoa digitou o mesmo nome "guardado"?
    if (strcmp(nome, nomeNovo) == 0) {
        printf("Os nomes são iguais!");
    } else {
        printf("Os nomes são diferentes!");
    }


    return 0;
}