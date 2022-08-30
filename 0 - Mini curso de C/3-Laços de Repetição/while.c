/*
    Sintaxe do while em C:

    while(<condição de parada baseada em uma var. de controle>) {
        //código
        //incremento ou decremento da variável de controle
    }

    Faça um programa em C que realizae a soma de 
    todos os valores inteiros de 1 até n, sendo que deve ser 
    informado pelo usuário
*/

#include <stdio.h>

int main()
{
    int i = 1, n, soma = 0;
    printf("Informe quantos valores devem ser somados: ");
    scanf("%d", &n);

    while(i <= n) {
        soma += i;
        i++;
    }

    printf("\nA soma do %d valores é: %d", n, soma);

    return 0;
}


//paramos aqui.. veremos o do..while aula que vem