/*
    3. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos.
    Calcule e armazene a média arredondada. Armazene também a situação do aluno:
    1- Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem contendo as notas,
    a média e a situação de cada aluno em formato tabulado. Utilize quantos vetores forem 
    necessários para armazenar os dados.
*/

#include <stdio.h>

int main() {

    float nota1[15], nota2[15], media[15];
    int situacao[15];

    //laço para leitura das notas e cálculo das médias
    for (int i = 0; i < 15; i++) {
        printf("\nDo %dº aluno digite...:\n", (i + 1));
        printf("\tNOTA 1: ");
        scanf("%f", &nota1[i]);

        printf("\tNOTA 2: ");
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] + nota2[i]) / 2;

        if(media[i] >= 6) 
            situacao[i] = 1;
         else
            situacao[i] = 2;
    }

    //impressão dos dados
    printf("\n...Relatório da turma...\n");
    printf("Aluno \t Nota 1 \t Nota 2 \t Média \t\t Situação\n");
    for (int i = 0; i < 15; i++) {
        printf("%02d\t", (i + 1));
        printf("%.2f\t\t", nota1[i]);
        printf("%.2f\t\t", nota2[i]);
        printf("%.2f\t\t", media[i]);
        if(situacao[i] == 1) 
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
    }

}
