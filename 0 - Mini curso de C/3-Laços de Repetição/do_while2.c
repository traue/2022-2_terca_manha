/*
    Faça um programa em linguagem C que funcione através do 
    menu a seguir:

    1 - Somar vários números (até a pessoa digitar -999)
    2 - Multiplicar vários números (até a pessoa digita -999)
    3 - Sair do programa
*/

#include <stdio.h>

int main() {

    int opc;
    float num, soma, mult;

    do {
        printf("\nFaça sua escolha: \n");
        printf("\n\t1 - Somar vários números\n ");
        printf("\t2 - Multiplicar vários números\n ");
        printf("\t3 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1: //soma
                soma = num = 0;
                while(num != -999) {
                    soma += num;
                    printf("\nDigite um número ou -999 para encerrar: ");
                    scanf("%f", &num);
                }
                printf("Soma: %.2f", soma);
                break;
            case 2: //multiplicação
                mult = num = 1;
                while(num != -999) {
                    mult *= num;
                    printf("\nDigite um número ou -999 para encerrar: ");
                    scanf("%f", &num);
                }
                printf("\nMultiplicação: %.2f", mult);
                break;
            default:
                break;
        }
    } while(opc != 3);

    printf("\nPrograma finalizado!");
    
    return 0;
}
