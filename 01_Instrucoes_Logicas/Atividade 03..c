#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor1,valor2,soma,subt,mult,div;
    valor1= 9;
    valor2= 3;
    soma= 9 + 3;
    subt= 9 - 3;
    mult= 9 * 3;
    div= 9/3;
    printf("O resultado da soma entre o  número %d e o número %d é igual a: %d\n",valor1,valor2,soma);
    printf("O resultado da subtração entre o número %d e o número %d é igual a: %d\n",valor1,valor2,subt);
    printf("O resultado da multiplicação entre o número %d e o número %d é igual a: %d\n",valor1,valor2,mult);
    printf("O resultado da divisão entre o número %d e o número %d é igual a: %d\n",valor1,valor2,div);
    system("pause");
    return 0;
}
