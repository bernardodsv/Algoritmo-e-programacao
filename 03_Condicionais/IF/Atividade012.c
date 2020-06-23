/*Escrever um algoritmo para ler dois valores e uma das seguintes opera��es a serem executadas
(codificadas da seguinte forma: 1 - Adi��o, 2 - Subtra��o, 3-  Multiplica��o e 4 � Divis�o).
Calcular e escrever o resultado dessa opera��o sobre os dois valores lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

// Declarar as vari�veis.

    float v1,v2,res;

    printf("Nesse programa iremos fazer calculos com 2 n�meros inteiros.\n");

// Pedimos as vari�veis.

    printf("Digite um n�mero inteiro: ");
    scanf("%f", &v1);

    printf("Digite outro n�mero inteiro: ");
    scanf(" %f", &v2);

// C�lculamos as vari�veis

    float adic,subt,mult,divis;

    adic =(v1+v2);
    subt =(v1-v2);
    mult =(v1*v2);
    divis =(v1/v2);

    printf("Agora para realizarmos a opera��o, digite o n�mero conforme a opera��o que deseja.\n");

// Mostramos para o usu�rio o que ele pode pedir.

    printf("1- Adi��o.\n2- Subtra��o.\n3-Multiplica��o.\n4-Divis�o.\n");
    scanf(" %f", &res);

    if(res == 1){
        printf("Voce digitou 1. A soma entre %.1f e %.1f � igual a %.2f \n",v1,v2,adic);
    }
    else if(res == 2){
        printf("Voce digitou 2. A subtra��o entre %.1f e %.1f � igual a %.2f \n",v1,v2,subt);
    }
    else if(res == 3){
        printf("Voce digitou 3. A multiplica��o entre %.1f e %.1f � igual a %.2f \n",v1,v2,mult);
    }
    else if(res == 4){
        printf("Voce digitou 4. A divis�o entre %.1f e %.1f � igual a %.2f \n",v1,v2,divis);
    }

// Caso o usu�rio tenha respondido algo errado.

    else{
        printf("O n�mero que voc� digitou n�o corresponde a nenhuma opera��o.\n\n");
    }

    return 0;
}
