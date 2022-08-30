/*
3. Faça um programa em C que imprima todos multiplos de 5 de 1 até 500.
*/

#include <stdio.h>

int main() {

    //solução 1 (ineficiente):
    for(int i = 1; i <= 500; i++) {
        if(i % 5 == 0) {
            printf("%d \n", i);
        }
    }

    printf("Solução 2:\n");
    
    //solução 2 (um pouco melhor computacionalmente):
    for(int i = 5; i<= 500; i+=5) {
        printf("%d \n", i);
    }

    return 0;
}