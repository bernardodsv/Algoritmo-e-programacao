/*
Desenvolver um algoritmo, em Linguagem C, para solicitar ao usuário a digitação de dez números inteiros.
Os números digitados deverão ser armazenados em um vetor. Após, esse vetor deverá ser ordenado de modo crescente.
Por fim, o algoritmo deve apresentar, na tela do computador, o conteúdo do vetor ordenado.
Exemplo: caso o usuário digite os números 3 6 9 8 1 2 4 7 10 5 o algoritmo deve ordenar
e exibir os números em ordem crescente: 1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando um vetor para 10 números. Variavel de dois contadores. E a ordenação.
    int i,j,cres,numero[10];

    // Colocando uma repetição:  Para digitação dos números.
    for(i=0;i<10;i++){
        printf("\n Digite um valor: ");
        scanf("%d",&numero[i]);
    }

    // Repetição para
    for (i = 0; i < 10; i++){
        for(j=i+1;j<10;j++){
            // se os numeros do contador I forem maiores que os contadores de J:
            if(numero[i] > numero[j]){
                // O crescente vira o proprio número.
                cres = numero[i];
                // e o número fica igual o contador J
                numero[i]=numero[j];
                // E o número J repete ao crescente.
                numero[j]=cres;
            }
        }
    }
    // Repetição: de 0 a 9(10 numeros).
    for(i=0;i<=9;i++){
        // mostrando os números em ordem crescente.
        printf("\n%d",numero[i]);
    }

    return 0;
}
