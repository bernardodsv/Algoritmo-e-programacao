/*
   EXEMPLO DE USO: CONTROLE CONDICIONAL com os comandos if e else
   Algoritmo com a implementação de um exemplo em que deverá ser
   solicitado, ao usuário, qual a temperatura corporal de uma pessoa.
   Com base na resposta informada, o algoritmo oferece uma ou outra resposta.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	// início do algoritmo
	float temperatura;
	printf("Exemplo de CONTROLE CONDICIONAL com o comando if\n");
	printf("Informe o valor para a temperatura corporal:\n");
	scanf("%f", &temperatura);

	// Nesse ponto há o teste para o controle condicional
	if (temperatura >= 39) {
		printf("Pessoa com febre alta\n");
	}
	else {
		printf("Temperatura não indica febre alta\n");
	}

	// continuação do algoritmo
	printf("Fluxo do programa segue normalmente...\n");
	printf("...caso existam mais comandos a serem usados no algoritmo\n");

	return 0;
}
