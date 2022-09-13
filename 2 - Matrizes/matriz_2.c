/*
    Faça um programa em C que armazene as 3 notas de 4 alunos.
    Após a leitura o programa deve calcular a nota final com o 
    média das três notas.
    Ao final deve imprimir as notas e a nota final para cada aluno.
    Utilizar matrizes!
*/

#include <stdio.h>

int main() {
    
    //declaração da matriz necessária:
    float notas[4][4];

    //entrada dos dados (notas):
    for (int i = 0; i < 4; i++) { //linha
        for (int j = 0; j < 3; j++) { //coluna
            printf("Informe a %dª nota do %dº aluno: ", (j + 1), (i + 1));
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
        notas[i][3] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
    }

    //exibição dos dados:
    for (int i = 0; i < 4; i++) {
        printf("\nNotas do %dº aluno: ", (i + 1));
        for (int j = 0; j < 3; j++) {
            if(j != 2) {
                printf("%.2f \t", notas[i][j]);
            } else {
                printf("\t%.2f\n", notas[i][j]);
            }
        }
        printf("Nota final....: %.2f\n", notas[i][3]);
    }
    
    return 0;
}