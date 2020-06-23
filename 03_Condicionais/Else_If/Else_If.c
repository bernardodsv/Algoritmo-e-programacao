/* Escrever um algoritmo que lê três valores para os lados de um triangulo
(cada lado do triângulo deve ser menor que a soma dos outros dois valores.)
O programa deve verificar se os lados fornecidos formam realmente um triangulo
, e caso sim, verificar se o tringulo é do tipo Equilátero(todos lados iguais.),
isósceles(dois lados iguais.) ou escaleno(todos os lados diferentes)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando a variável dos lados do triângulo.
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

    /* Primeiro, teremos que verificar se realmente é um triângulo. Ou seja a soma de dois lados tem que ser maior ou igual ao outro lado.
     Lado1 + lado2 for maior ou igual ao lado3, E Lado1 + lado3 maior ou igual a lado2, E lado2 + lado3 maior ou igual a lado1. */

    // Caso isso aconteça, iremos verificar que tipo de triangulo é.
    // Caso isso não corresponda, não será um triângulo.


    if ((lado1 + lado2 >= lado3) && (lado1 + lado3 >= lado2) && (lado2 + lado3 >= lado1));{

        // Se tiver todos lados iguais, será EQUILATERO.
		if ((lado1 == lado2) && (lado2 == lado3) && (lado3 == lado1)){
			printf("Triângulo equilatero. \n");
		}

        // Caso tenha apenas um dos lados iguais, será um ISÓSCELES.
		else if ((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
			printf("Triângulo isósceles. \n");
		}

        // Se tiver todos os lados diferentes será ESCALENO.
		else if ((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
			printf("Triângulo escaleno. \n");
		}

	else {
		printf("Não é um triângulo\n");
	}
	}


	system("pause");
    return 0;
}
