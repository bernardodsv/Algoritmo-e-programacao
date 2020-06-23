/*
Desenvolver um algoritmo, em Linguagem C, para solicitar ao usu�rio a digita��o de dez n�meros inteiros.
Os n�meros digitados dever�o ser armazenados em um vetor. Ap�s, esse vetor dever� ser ordenado de modo crescente.
Por fim, o algoritmo deve apresentar, na tela do computador, o conte�do do vetor ordenado.
Exemplo: caso o usu�rio digite os n�meros 3 6 9 8 1 2 4 7 10 5 o algoritmo deve ordenar
e exibir os n�meros em ordem crescente: 1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando um vetor para 10 n�meros. Variavel de dois contadores. E a ordena��o.
    int i,j,cres,numero[10];

    // Colocando uma repeti��o:  Para digita��o dos n�meros.
    for(i=0;i<10;i++){
        printf("\n Digite um valor: ");
        scanf("%d",&numero[i]);
    }

    // Repeti��o para
    for (i = 0; i < 10; i++){
        for(j=i+1;j<10;j++){
            // se os numeros do contador I forem maiores que os contadores de J:
            if(numero[i] > numero[j]){
                // O crescente vira o proprio n�mero.
                cres = numero[i];
                // e o n�mero fica igual o contador J
                numero[i]=numero[j];
                // E o n�mero J repete ao crescente.
                numero[j]=cres;
            }
        }
    }
    // Repeti��o: de 0 a 9(10 numeros).
    for(i=0;i<=9;i++){
        // mostrando os n�meros em ordem crescente.
        printf("\n%d",numero[i]);
    }

    return 0;
}
