/*
    6. O Google está desenvolvendo um novo sistema operacional para máquinas 
    de venda de bolinhas de borracha de R$1,00, mas precisa realizar testes 
    no Gerenciador de Memória desse sistema. Você foi contratado para fazer 
    um programa para verificar se o gerenciador de memória está funcionando 
    corretamente. Seu programa deverá ler 3 números inteiros, 3 números 
    decimais, 3 letras, armazená-las em variáveis, e depois, através de 
    ponteiros, trocar os seus valores, substituindo todos os números 
    inteiros pelo número 2014, os decimais por 9.99, e as letras por ’Y’.
    Depois da substituição, o programa deverá exibir o valor das variáveis 
    já devidamente atualizadas.
*/

#include <stdio.h>

int main() {

    int n1, n2, n3;
    int *pNum;
    float d1, d2, d3;
    float *pDec;
    char c1, c2, c3;
    char *pLetra;

    //leitura dos dados necessários

    //---inteiros
    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);

    printf("Digite mais um número inteiro: ");
    scanf("%d", &n3);
   
    printf("\n-----\n");

    //---decimais
    printf("Agora digite um decimal: ");
    scanf("%f", &d1);

    printf("Agora digite outro decimal: ");
    scanf("%f", &d2);

    printf("Agora digite mais um decimal: ");
    scanf("%f", &d3);

    printf("\n-----\n");

    //---caracteres
    printf("Agora digite uma letra: ");
    scanf(" %c", &c1);

    printf("Agora digite outra letra: ");
    scanf(" %c", &c2);

    printf("Agora digite mais uma letra: ");
    scanf(" %c", &c3);

    //impressão dos dados de entrada
    printf("\nOs dados informados são:\n");
    printf("Inteiros: %d, %d, %d\n", n1, n2, n3);
    printf("Decimais: %.2f, %.2f, %.2f\n", d1, d2, d3);
    printf("Letras: %c, %c, %c\n", c1, c2, c3);
    
    //troca dos valores através dos ponteiros

    //das vars inteiras
    pNum = &n1;
    *pNum = 2014;

    pNum = &n2;
    *pNum = 2014;

    pNum = &n3;
    *pNum = 2014;

    //das vars decimais
    pDec = &d1;
    *pDec = 9.99;

    pDec = &d2;
    *pDec = 9.99;

    pDec = &d3;
    *pDec = 9.99;

    //das vars char
    pLetra = &c1;
    *pLetra = 'Y';

    pLetra = &c2;
    *pLetra = 'Y';

    pLetra = &c3;
    *pLetra = 'Y';

    //reimpressão dos dados
    printf("\nOs dados alterados são:\n");
    printf("Inteiros: %d, %d, %d\n", n1, n2, n3);
    printf("Decimais: %.2f, %.2f, %.2f\n", d1, d2, d3);
    printf("Letras: %c, %c, %c\n", c1, c2, c3);

    return 0;
}