// Identificar se a letra � uma vogal:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

        setlocale(LC_ALL,"portuguese");

        // Declarando variavel
        char letra;

        // Pedindo dado para a variavel
        printf("Digite uma letra: ");
        scanf("%c", &letra);

        // Limpando a tela
        system("cls");


        // Adicionando a condicional SWITCH
        switch (letra){

            // Caso for A
            case 'a':
                printf("A letra digitada �:'%c' que � uma vogal.\n",letra);
            break;


            // Caso for E
            case 'e':
                printf("A letra digitada �:'%c' que � uma vogal.\n",letra);
            break;


            // Caso for I
            case 'i':
                printf("A letra digitada �:'%c' que � uma vogal.\n",letra);
            break;


            // Caso for O
            case 'o':
                printf("A letra digitada �:'%c' que � uma vogal.\n",letra);
            break;


            // Caso for U
            case 'u':
                printf("A letra digitada �:'%c' que � uma vogal.\n",letra);
            break;


            // Caso for uma consoante
            default:
                printf("Voc� digitou a letra %c, que � uma consoante\n",letra);
        }

    system("pause");

    return 0;
}
