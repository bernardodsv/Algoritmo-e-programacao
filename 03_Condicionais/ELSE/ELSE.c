/*
   EXEMPLO DE USO: CONTROLE CONDICIONAL com os comandos if e else
   Algoritmo com a implementa��o de um exemplo em que dever� ser
   solicitado, ao usu�rio, qual a temperatura corporal de uma pessoa.
   Com base na resposta informada, o algoritmo oferece uma ou outra resposta.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	// in�cio do algoritmo
	float temperatura;
	printf("Exemplo de CONTROLE CONDICIONAL com o comando if\n");
	printf("Informe o valor para a temperatura corporal:\n");
	scanf("%f", &temperatura);

	// Nesse ponto h� o teste para o controle condicional
	if (temperatura >= 39) {
		printf("Pessoa com febre alta\n");
	}
	else {
		printf("Temperatura n�o indica febre alta\n");
	}

	// continua��o do algoritmo
	printf("Fluxo do programa segue normalmente...\n");
	printf("...caso existam mais comandos a serem usados no algoritmo\n");

	return 0;
}
