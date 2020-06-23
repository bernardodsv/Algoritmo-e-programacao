#include <stdio.h>
#include <stdlib.h>

int main(){

	int v1 = 10;
	int v2 = 3;
	int resultado;

	//operadores aritm�ticos (opera��es matem�ticas)
	// +, -, *, /, %
	resultado = v1 + v2;
	printf("Valor 1 (%d) + Valor 2: (%d) = %d\n", v1, v2, resultado);


	//operadores de incremento e decremento
	// ++, --
	v1++;
	v2--;
	printf("Novos valores: Valor 1: %d e Valor 2: %d\n", v1, v2);

	//operadores de associa��o (associar valor na vari�vel)
	// =, +=, -=, *=, /=. %=
	v1 = 20;
	v2 = 30;
	resultado = v1;
	printf("Novo valor de resultado %d\n", resultado);
	v1 += v2; // � o mesmo que: v1 = v1 + v2;
	printf("Novo valor de v1: %d\n", v1);

	//operadores relacionais (relacionamento entre dois operandos)
	// ==, >, <, !=, >=, <=
	//caso o relacionamento seja verdadeiro (true), retorna 1;
	//caso o relacionamento seja falso (false), retorna 0;
	printf("%d == %d :%d\n", v1, v2, v1 == v2);
	printf("%d > %d :%d\n", v1, v2, v1 > v2);
	printf("%d <= %d :%d\n", v1, v2, v1 <= v2);

	//operadores l�gicos
	// && (e), || (ou), !(nega��o)
	//retorna verdadeiro ou falso dependendo a opera��o
	resultado = (v1 > v2) && (v1 > 100);
    printf("(v1 > v2) && (v2 > 100) :%d \n", resultado);

    resultado = (v1 > v2) && (v1 < 100);
    printf("(v1 > v2) && (v2 > 100) :%d \n", resultado);


return 0;
}
