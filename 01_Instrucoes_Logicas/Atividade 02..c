#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"Portuguese");
    int n1,n2,res,soma;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite mais um número: ");
    scanf("%d", &n2);
    printf("Digite o resultado da soma: ");
    scanf("%d", &res);
    soma=(n1+n2);
    if (soma == res) {
		printf("Você acertou!");
}
	else {
		printf("Você errou!");
}

    return 0;
}
