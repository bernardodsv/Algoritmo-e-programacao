// Ler dois números e calcular o somatório dos números do intervalo (Incluindo o somatório, os n° lidos)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int num1, num2, i, soma = 0, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite mais um numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        maior = num1;
        menor = num2;
    } else{
        maior = num2;
        menor = num1;
    }
    for(i = num1; i <= num2; i++){
        soma += i;
    }
        printf("A soma do intervalo entre %d e %d = %d\n", num1, num2, soma);
}
