//Vamos, aqui, definir uma STRUCT nossa que representará um funcionário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definição da estrutura (tipo definido por nós mesmos, programadores):
struct funcionario {
    int codigo, codDpto, codCargo;
    char nome[50];
    float salario; 
    char sexo;   
};

typedef struct funcionario Funcionario;


int main() {

    //declarção de uma variável que utiliza uma estrutura (struct)
    //A leitura que fazemos é: func1 é uma variável do tipo "funcionario"
    Funcionario func1;
    Funcionario func2;

    //para atribuir valores...:
    func1.codDpto = 1;
    func1.codCargo = 3;
    func1.codigo = 123;
    func1.salario = 38980.50;
    func1.sexo = 'L';
    strcpy(func1.nome, "Romulo");

    //para acessar os dados (imprimir, neste caso):
    printf("Nome do funcionário: %s \n", func1.nome);
    printf("Código do funcionário: %d \n", func1.codigo);
    printf("Código do departamento do funcionário: %d \n", func1.codDpto);
    printf("Código do gargo: %d \n", func1.codCargo);
    printf("Salário do funcionário: %.2f", func1.salario);
    
    return 0;
}