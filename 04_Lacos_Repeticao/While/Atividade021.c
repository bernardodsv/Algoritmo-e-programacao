/* solicitar ao usuário as 5 vogais e armazenar no vetor apenas
   caracteres que realmente forem vogais.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");

    char vogal[5];
    char caractere;
    int contador=0;

    // bloco de instruções para solicitar e armazenar no vetor as vogais
    while(contador<5){
        printf("Digite uma vogal qualquer\n");
        scanf(" %c", &caractere);
        if ((caractere=='a') || (caractere=='e') || (caractere=='i') || (caractere=='o') || (caractere=='u')){
            vogal[contador] = caractere;
            contador++;
        }
    }

    // bloco para exibir na tela do computador, o conteúdo do vetor vogal
    contador=0;
    printf("Conteúdo do vetor vogal:\n");
    while (contador<5){
        printf("%c ", vogal[contador]);
        contador++;
    }

    printf("\nFim do algoritmo\n");



    return 0;
}
