#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor1,valor2;
    float div;
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&valor1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf( "%d",&valor2);
    getch();
    system("cls");
    div= valor1 / valor2;
    printf("A soma entre os n�meros %d e %d, � igual a: %d\n\n",valor1,valor2,(valor1+valor2));
    printf("A subtra��o entre os n�meros %d e %d, � igual a: %d\n\n",valor1,valor2,(valor1-valor2));
    printf("A multiplica��o entre os n�meros %d e %d, � igual a: %d\n\n",valor1,valor2,(valor1*valor2));
    printf("A divis�o entre os n�meros %d e %d, � igual a: %.2f\n\n",valor1,valor2,div);
    system("pause");
    return 0;
}
