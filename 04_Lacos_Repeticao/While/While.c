/*
Usando while para evitar o c�digo ficar gigante.

Estrutura:
while (contador <= 10) // Testando a condi��o{
    printf("%d ", contador); //Executando um comando dentro do la�o
    contador++; //atualizando a vari�vel de controle
  }
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int contador;

    while (contador <= 10){
        printf("%d\n",contador);
        contador++;
    }

    system("pause");
    return 0;
}
