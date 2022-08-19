/*
    Para entendermos melhor o desvio condicional
    vamos pensar no seguinte cenário:
    Dadas duas notas de um aluno
    ao se calcular a média é preciso verificar 
    se ele está aprovado ou não. 
    O critério de aprovação é nota 6, neste caso.
*/
#include <stdio.h>

int main(void) {

    float nota1 = 5;
    float nota2 = 4;
    float media = (nota1 + nota2) / 2;

    printf("\nNota 1: %.2f", nota1);
    printf("\nNota 2: %.2f", nota2);
    printf("\nMédia: %.2f", media);

    //os desvios condicionais são baseados em condições
    //booleana -> verdadeiro (true) / falso (false)
    /*
        Nas comparações booleanas podemos fazer as seguintes operações:
        <       menor
        >       maior
        <=      menor OU igual
        >=      maior OU igual
        !=      diferente
        !       negação
        ==      exatamente igual
    */
    if(media >= 6) { //se a média é maior ou igual
        printf("\nO aluno foi aprovado!");
    } else { //senão 
        printf("\nO aluno foi reprovado");
    }
    return 0;
}