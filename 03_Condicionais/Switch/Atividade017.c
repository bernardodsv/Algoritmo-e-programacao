// Fazer uma calculadora:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando variavéis
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

    // Informando e pedindo as operações.
    printf("Digite que operação você deseja fazer:\n'+ =somar\n','/ =dividir\n','* =multiplicar\n','- =subtrair'\n");
    scanf(" %c",&opcao);

    // Limpando a tela:
    system("cls");

    // Usando a condicional SWITCH CASE:
    switch (opcao){

        // SOMA
        case '+':
            resultado=(valor1 + valor2);
            printf("A soma entre %.2f e %.2f é: %.2f\n",valor1,valor2,resultado);
        break;

        // DIVISAO
        case '/':
            resultado=(valor1 / valor2);
            printf("A divisao entre %.2f e %.2f é: %.2f\n",valor1,valor2,resultado);
        break;

        // MULTIPLICAÇÃO
        case '*':
            resultado=(valor1 * valor2);
            printf("A multiplicaçao entre %.2f e %.2f é: %.2f\n",valor1,valor2,resultado);
        break;

        // SUBTRAÇÃO
        case '-':
            resultado=(valor1 - valor2);
            printf("A subtração entre %.2f e %.2f é: %.2f\n",valor1,valor2,resultado);
        break;

        // CASO DIGITE ALGO ERRADO:
        default:
            printf("Erro!\n");
    }

    system("pause");

    return 0;
}
