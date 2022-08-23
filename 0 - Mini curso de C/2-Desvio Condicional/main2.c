/*
(do material que o professor utiliza)
Escreva um programa em linguagem C que leia um peso na 
Terra e o número de um planeta. O programa deve imprimir
o valor correspondente do peso neste planeta.
A relação de planetas é dada a seguir juntamente com o 
valor das gravidades relativas à Terra.

Cód     Gravidade Relativa      Planeta
------------------------------------------
1           0,37                Mercúrio
2           0,88                Vênus
3           0,38                Marte
4           2,64                Júpter
5           1,15                Saturno
6           1,17                Urano

Para calcular o peso no planeta em questão, use a seguinte 
fórmula:

    PP = (PT / 10) * G

Sendo:

    PP = Peso no planeta
    PT = Peso na Terra
    G = Gravidade relativa
*/

#include <stdio.h>

int main() {

    //declarações de variáveis necessárias
    float peso, pesoPlaneta;
    int numPlaneta;

    //leitura dos dados:
    printf("Informe seu peso na Terra: ");
    scanf("%f", &peso);

    printf("\nInforme o número do planeta: \n");
    printf("\nNumero \t Planeta");
    printf("\n 1 \t Mercúrio");
    printf("\n 2 \t Vênus");
    printf("\n 3 \t Marte");
    printf("\n 4 \t Júpter");
    printf("\n 5 \t Saturno");
    printf("\n 6 \t Urano");
    printf("\nSua escolha: ");
    scanf("%d", &numPlaneta);

    //Solução (implementação do problema):
    switch(numPlaneta) {
        case 1:
            pesoPlaneta = (peso / 10) * 0.37;
            break;
        case 2:
            pesoPlaneta = (peso / 10) * 0.88;
            break;
        case 3:
            pesoPlaneta = (peso / 10) * 0.38;
            break;
        case 4:
            pesoPlaneta = (peso / 10) * 2.64;
            break;
        case 5:
            pesoPlaneta = (peso / 10) * 1.15;
            break;
        case 6:
            pesoPlaneta = (peso / 10) * 1.17;
            break;
        default: //caso não seja atendida nenhuma condição
            printf("Planeta escolhido inválido!");
            break;
    }

    printf("\nSeu no no planeta escolhido é: %.2f", pesoPlaneta);

    return 0;
}