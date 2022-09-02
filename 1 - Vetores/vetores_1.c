//faremos um programa bem simples que calcula a média de 6 idades

#include <stdio.h>

int main() {
    int idades[6];

    //para atribuir valores à um vetor, basta acessar cada uma das posições:
    idades[0] = 19; //1ª posição
    idades[1] = 20; //2ª posição
    idades[2] = 18; //3ª posição
    idades[3] = 30; //4ª posição
    idades[4] = 22; //5ª posição
    idades[5] = 35; //6ª posição
    //não podemos acessar essa posição pois o vetor possui apenas 4 elementos (0..3)
    //idades[6] = 17;

    printf("Sizeof do vetor: %lu", sizeof(idades));
    printf("\nTamanho de um INT na memória: %lu", sizeof(int));

    printf("\nO tamanho do vetor é: %lu", (sizeof(idades) / sizeof(int)));

    printf("\nIdades: %d, %d, %d, %d, %d, %d", 
        idades[0], idades[1], idades[2], idades[3], idades[4], idades[5]);
    
    float mediaIdades = 0;
    mediaIdades = (idades[0] + idades[1] + idades[2] + idades[3] + 
        idades[4] + idades[5]) / (sizeof(idades) / sizeof(int));

    printf("\nA média das idades é %.2f", mediaIdades);

    return 0;
}