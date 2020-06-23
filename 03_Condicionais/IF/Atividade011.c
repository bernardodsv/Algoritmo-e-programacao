#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");


    float nota1, nota2, nota3;

    printf("O PROGRAMA IRÁ LER SUA NOTA E DIZER SE VOCÊ ESTÁ APROVADO OU REPROVADO\n\n");

    printf("\nQual sua primeira nota? ");
    scanf("%f", &nota1);

    printf("\nQual sua segunda nota? ");
    scanf(" %f", &nota2);

    float media = (nota1 + nota2)   / 2;

    if(media >= 6){
        printf("Você foi aprovado. Sua primeira nota foi %.2f, sua segunda %.2f e sua média foi de %.2f\n\n",nota1,nota2,media);
    }
    else{
        printf("Você não alcançou a média é necessário adicionar a nota do exame: ");
        scanf("%f", &nota3);

        float media2 = (media + nota3)  / 2;

        if(media2 >= 5){
            printf("Você foi aprovado.\n");
        }
        else{
            printf("Você foi reprovado.\n");
        }
        }

    system("pause");
    return 0;
}
