
# include <stdlib.h>
# include <stdio.h>


int main() {

    /*
    int idade;
    idade = 18;
    printf("Idade: %d\n", idade);


    int vetor[3]; // vetor[3] --> |0| |1| |2|
    vetor[0] = 19;
    vetor[1] = 20;
    vetor[2] = 25;
    printf("Vetor[0]: %d   Vetor[1]: %d   Vetor[2]: %d\n", vetor[0], vetor[1], vetor[2]);
    printf("O que h� na posi��o 1 do vetor? Resposta: %d\n", vetor[1]);
    */

    /*
    int idade[5]; // tamanho do vetor � 5, por�m as posi��es/�ndices v�o de 0 at� 4
    int i;
    for(i=0; i<5; i++) {
        printf("Digite a idade %d:\n", (i+1));
        scanf("%d", &idade[i]);
    }

    for(i=0; i<5; i++) {
        printf("Conte�do do Vetor:%d\n", idade[i]);
    }
    */

    char vogal[5];
    vogal[0] = 'a';
    vogal[1] = 'e';
    vogal[2] = 'i';
    vogal[3] = 'o';
    vogal[4] = 'u';

    printf("Conte�do da segunda posi��o do vetor vagal: %c\n", vogal[1]);
    printf("Conte�do da �ltima posi��o (tamanho -1) do vetor vagal: %c\n", vogal[4]);


    return 0;
}
