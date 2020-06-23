#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor1,valor2;
    float div;
    printf("Digite um número inteiro: ");
    scanf("%d",&valor1);
    printf("Digite o segundo número inteiro: ");
    scanf( "%d",&valor2);
    getch();
    system("cls");
    div= valor1 / valor2;
    printf("A soma entre os números %d e %d, é igual a: %d\n\n",valor1,valor2,(valor1+valor2));
    printf("A subtração entre os números %d e %d, é igual a: %d\n\n",valor1,valor2,(valor1-valor2));
    printf("A multiplicação entre os números %d e %d, é igual a: %d\n\n",valor1,valor2,(valor1*valor2));
    printf("A divisão entre os números %d e %d, é igual a: %.2f\n\n",valor1,valor2,div);
    system("pause");
    return 0;
}
