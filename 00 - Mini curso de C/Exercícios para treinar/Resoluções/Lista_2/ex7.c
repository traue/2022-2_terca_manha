/*
    7. Construa um programa que leia o percurso em
    quilómetros, o tipo do carro e informe o consumo
    estimado de combustível, sabendo-se que um carro
    tipo A faz 12 km com um litro de gasolina, um tipo
    B faz 9km e o tipo C, 8km por litro.
*/

#include <stdio.h>

int main()
{

    float distancia, consumo;
    char tipoCarro;

    // leitura dos dados:
    printf("Qual o tipo de Carro? <A | B | C>: ");
    scanf("%c", &tipoCarro);

    printf("Qual a distância a percorrer (em Km): ");
    scanf("%f", &distancia);

    // calculos:
    switch (tipoCarro)
    {
    case 'A':
        consumo = distancia / 12;
        break;
    case 'B':
        consumo = distancia / 9;
        break;
    case 'C':
        consumo = distancia / 8;
        break;
    default:
        printf("Tipo de veículo inválido!");
        return 0;
    }

    printf("Consumo estimado: %.2fL", consumo);

    return 0;
}
