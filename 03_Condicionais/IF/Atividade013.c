/* Ler a idade de uma pessoa expressa em anos, meses e dias.
O algoritmo deve mostrar a idade da pessoa em dias (considere que todos os anos tem 365 dias
e todos os meses tem 30 dias). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int anos,meses,dias,resultado1,resultado2,resf;

    printf("Nesse programa iremos calcular a sua idade em dias.\n""Digite a sua idade expressa em anos, meses e dias:\n");

    printf("Anos: ");
    scanf(" %d",&anos);

    printf("Meses: ");
    scanf("%d",&meses);

    printf("Dias: ");
    scanf("%d",&dias);

    printf("Aperte ENTER para ver o resultado.");

    getch();
    system("cls");

    resultado1 = (anos*365);
    resultado2 = (meses*30) + dias;
    resf = resultado1 + resultado2;

    printf("Sua idade em dias são %d dias\n\n",resf);

    system("pause");
    return 0;
}
