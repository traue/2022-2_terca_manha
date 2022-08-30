/*
    5. Construa um programa em C que leia vários números 
    e informe quantos números entre 100 e 200 foram 
    digitados. Quando o valor 0 (zero) for lido, 
    o algoritmo deverá cessar sua execução.
*/

#include <stdio.h>

int main() {
    int numeroDigitado = -1, contator = 0;
    printf("Inicie a digitação de números....\n");
    
    while (numeroDigitado != 0) {
        printf("Número: ");
        scanf("%d", &numeroDigitado);
        if(numeroDigitado >= 100 && numeroDigitado <= 200) 
            contator++;
    }

    printf("Números entre 100 e 200 informados: %d", contator);
    
    return 0;
}