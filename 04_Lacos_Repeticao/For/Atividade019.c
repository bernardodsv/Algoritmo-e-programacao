#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i,tabuada,calculo;

    printf("Digite qual tabuada você quer:\n '1','2','3','4','5','6','7','8','9','10':");
    scanf("%d", &tabuada);

    for (i=0; i<=10; i++){
    calculo = (tabuada * i);
        printf("%d * %d= %d\n", 1, tabuada, calculo);
    }

    return 0;
}
