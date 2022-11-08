/*
4. Crie um programa em C que seja capaz de entrar com três notas de 5 alunos. 
O programa deve mostrar a média de cada aluno e a média da turma.
*/

#include <stdio.h>

int main() {
    
    float nota, mediaIndividual, mediaTurma = 0;

    for(int i = 1; i <= 5; i++) {
        mediaIndividual = 0;
        for(int j = 1; j <= 3; j++) {
            printf("Informe a %dª nota do %dº aluno: ", j, i);
            scanf("%f", &nota);
            mediaIndividual += nota;
        }
        mediaIndividual /= 3; //mesmo que mediaIndividual = mediaIndividual / 3;
        mediaTurma += mediaIndividual;
        printf("\nMédia do %d aluno: %.2f \n", i, mediaIndividual);
    }

    mediaTurma /= 5;
    printf("\nMédia da turma: %.2f", mediaTurma);

    return 0;
}