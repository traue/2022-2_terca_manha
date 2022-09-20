/*
    5. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
    deve conter o número de matrícula do aluno, seu nome e notas de três provas.
    Defina também um tipo para esta estrutura. 
    Agora, escreva um programa que leia os dados de cinco alunos e os armazena 
    nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a 
    maior média geral dentre os cinco.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[50];
    float p1, p2, p3;
};

typedef struct aluno Aluno;

int main() {

    //estrutura que representa 5 alunos
    Aluno alunos[5];

    //outras variáveis necessárias
    float media = 0, maiorMedia = 0;
    int indiceMaiorMedia;

    //leitura dos dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Informe a matrícula do %dº aluno: ", (i + 1));
        scanf("%d", &alunos[i].matricula);

        char temp;
        printf("Informe o nome do %dº aluno: ", (i + 1));
        scanf("%c", &temp);
        scanf("%[^\n]%*c", alunos[i].nome);

        printf("Informe as notas nota %dº aluno: \n", (i + 1));
        
        printf("\tNota 1: ");
        scanf("%f", &alunos[i].p1);

        printf("\tNota 2: ");
        scanf("%f", &alunos[i].p2);

        printf("\tNota 3: ");
        scanf("%f", &alunos[i].p3);

        //calcula da media:
        media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
    }

    printf("\nDados do alunos com a maior média:\n");
    printf("\tMatricula....: %d \n", alunos[indiceMaiorMedia].matricula);
    printf("\tNome....: %s \n", alunos[indiceMaiorMedia].nome);
    printf("\tNota P1....: %.2f \n", alunos[indiceMaiorMedia].p1);
    printf("\tNota P2....: %.2f \n", alunos[indiceMaiorMedia].p2);
    printf("\tNota P3....: %.2f \n", alunos[indiceMaiorMedia].p3);
    printf("\tMédia....: %.2f \n", maiorMedia);

    return 0;
}