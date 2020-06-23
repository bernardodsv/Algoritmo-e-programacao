// Fazer uma calculadora:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando variav�is
    float valor1,valor2,resultado;
    char opcao;

    printf("Digite dois valores: \n");

    // Recebendo os valores
    printf("Valor 1: " );
    scanf(" %f", &valor1);
    printf("Valor 2: ");
    scanf(" %f", &valor2);

    // Limpando a tela:
    system("cls");

    // Informando e pedindo as opera��es.
    printf("Digite que opera��o voc� deseja fazer:\n'+ =somar\n','/ =dividir\n','* =multiplicar\n','- =subtrair'\n");
    scanf(" %c",&opcao);

    // Limpando a tela:
    system("cls");

    // Usando a condicional SWITCH CASE:
    switch (opcao){

        // SOMA
        case '+':
            resultado=(valor1 + valor2);
            printf("A soma entre %.2f e %.2f �: %.2f\n",valor1,valor2,resultado);
        break;

        // DIVISAO
        case '/':
            resultado=(valor1 / valor2);
            printf("A divisao entre %.2f e %.2f �: %.2f\n",valor1,valor2,resultado);
        break;

        // MULTIPLICA��O
        case '*':
            resultado=(valor1 * valor2);
            printf("A multiplica�ao entre %.2f e %.2f �: %.2f\n",valor1,valor2,resultado);
        break;

        // SUBTRA��O
        case '-':
            resultado=(valor1 - valor2);
            printf("A subtra��o entre %.2f e %.2f �: %.2f\n",valor1,valor2,resultado);
        break;

        // CASO DIGITE ALGO ERRADO:
        default:
            printf("Erro!\n");
    }

    system("pause");

    return 0;
}
