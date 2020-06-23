/*
Usando while para evitar o código ficar gigante.

Estrutura:
while (contador <= 10) // Testando a condição{
    printf("%d ", contador); //Executando um comando dentro do laço
    contador++; //atualizando a variável de controle
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
