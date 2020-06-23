#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor1,valor2,valor3,res;
    printf("Seja bem vindo ao programa!\nEsse programa calculará o volume de água que uma piscina suporta.\n");
    printf("Digite (em metros) a largura da piscina: ");
    scanf("%f",&valor1);
    system("cls");
    printf("Digite (em metros) o comprimento da piscina: ");
    scanf(" %f",&valor2);
    system("cls");
    printf("Digite (em metros) a profundidade da piscina: ");
    scanf(" %f",&valor3);
    system("cls");
    printf("O volume da piscina é igual a: %.2fm³\n\n\n",(valor1*valor2*valor3));
    system("pause");
    return 0;
}
