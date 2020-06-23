/* Escrever um algoritmo que l� tr�s valores para os lados de um triangulo
(cada lado do tri�ngulo deve ser menor que a soma dos outros dois valores.)
O programa deve verificar se os lados fornecidos formam realmente um triangulo
, e caso sim, verificar se o tringulo � do tipo Equil�tero(todos lados iguais.),
is�sceles(dois lados iguais.) ou escaleno(todos os lados diferentes)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando a vari�vel dos lados do tri�ngulo.
    float lado1,lado2,lado3;


    // Pedindo os dados de cada lado:

    printf("Digite 3 valores de um suposto triangulo.\n");

	// Primeiro lado:
	printf("Digite o valor do primeiro lado: ");
	scanf("%f", &lado1);

	// Segundo lado:
	printf("Digite o valor do segundo lado: ");
	scanf("%f", &lado2);

	// Terceiro lado:
	printf("Digite o valor do terceiro lado: ");
	scanf("%f", &lado3);


    // Agora adicionamos os condicionais:

    /* Primeiro, teremos que verificar se realmente � um tri�ngulo. Ou seja a soma de dois lados tem que ser maior ou igual ao outro lado.
     Lado1 + lado2 for maior ou igual ao lado3, E Lado1 + lado3 maior ou igual a lado2, E lado2 + lado3 maior ou igual a lado1. */

    // Caso isso aconte�a, iremos verificar que tipo de triangulo �.
    // Caso isso n�o corresponda, n�o ser� um tri�ngulo.


    if ((lado1 + lado2 >= lado3) && (lado1 + lado3 >= lado2) && (lado2 + lado3 >= lado1));{

        // Se tiver todos lados iguais, ser� EQUILATERO.
		if ((lado1 == lado2) && (lado2 == lado3) && (lado3 == lado1)){
			printf("Tri�ngulo equilatero. \n");
		}

        // Caso tenha apenas um dos lados iguais, ser� um IS�SCELES.
		else if ((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
			printf("Tri�ngulo is�sceles. \n");
		}

        // Se tiver todos os lados diferentes ser� ESCALENO.
		else if ((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
			printf("Tri�ngulo escaleno. \n");
		}

	else {
		printf("N�o � um tri�ngulo\n");
	}
	}


	system("pause");
    return 0;
}
