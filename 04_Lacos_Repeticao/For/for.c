/*
Usamos a estrutura de repeti��o para facilitar o c�digo.
Estrutura:
for(contador="inicio";contador="final";contador"++"/--){
    o que quer que repita.
    }
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Estrutura para mostrar uma contagem de 0 a 10 e de 10 a 0.

    int i,contador;

    for(i=0;i<=10;i++){
        printf("Contador: %d\n",i);
    }

    getch();
    system("cls");

    for(contador=10;contador>=0;contador--){
        printf("Contador ao contr�rio: %d\n",contador);
    }

    system("pause");
    return 0;
}
