/*
    5. Considere um vetor de 10 elementos, contendo valores inteiros. 
    Faça um programa que leia os valores para preencher esse vetor, após 
    a leitura o programa deve invocar uma função que calcule e devolva 
    as frequências absoluta e relativa desses valores no conjunto. 
    (Observação: a frequência absoluta de um valor é o número de 
    vezes que esse valor aparece no conjunto de dados; a frequência 
    relativa é a frequência absoluta dividida pelo número total 
    de dados). Utilize outros dois vetores para armazenar as frequências
    relativas e absolutas e ao final do programa, imprima de forma 
    tabulada os números e suas frequências absoluta e relativa
*/

#include <stdio.h>

void frequanciaRelAbs(int *vet, int *pAbs, float *pRel) {

    //1ºpasso ordenar o vetor original:
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vet[i] > vet[j]) {
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    //cálculo das freqências:
    for (int i = 0; i < 10; i++) {
        pAbs[i] = 1;
        for (int j = i + 1; j < 10; j++) {
            if (vet[i] == vet[j]) {
                pAbs[i]++;
            } else {
                if (pAbs[i] > 1) {
                    for (int k = i + 1; k < (i + pAbs[i]); k++) {
                        pAbs[k] = pAbs[i];
                        pRel[k] = (float)pAbs[i] / 10;
                    }
                }
                break;
            }
        }
        pRel[i] = (float)pAbs[i] / 10;
        i += pAbs[i] - 1;
    }
}

int main() {

    int vet[10], freqAbs[10];
    float freqRel[10];

    for (int i = 0; i < 10; i++) {
        printf("%dº valor: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    frequanciaRelAbs(vet, freqAbs, freqRel);

    printf("Impressão dos dados...\n");

    for(int i = 0; i < 10; i++) {
        printf("Posição %d \t %d \t %d \t %f\n", 
            i, vet[i], freqAbs[i], freqRel[i]);
    }


    return 0;
}