/*Escrever um algoritmo para ler dois valores e uma das seguintes operações a serem executadas
(codificadas da seguinte forma: 1 - Adição, 2 - Subtração, 3-  Multiplicação e 4 – Divisão).
Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

// Declarar as variáveis.

    float v1,v2,res;

    printf("Nesse programa iremos fazer calculos com 2 números inteiros.\n");

// Pedimos as variáveis.

    printf("Digite um número inteiro: ");
    scanf("%f", &v1);

    printf("Digite outro número inteiro: ");
    scanf(" %f", &v2);

// Cálculamos as variáveis

    float adic,subt,mult,divis;

    adic =(v1+v2);
    subt =(v1-v2);
    mult =(v1*v2);
    divis =(v1/v2);

    printf("Agora para realizarmos a operação, digite o número conforme a operação que deseja.\n");

// Mostramos para o usuário o que ele pode pedir.

    printf("1- Adição.\n2- Subtração.\n3-Multiplicação.\n4-Divisão.\n");
    scanf(" %f", &res);

    if(res == 1){
        printf("Voce digitou 1. A soma entre %.1f e %.1f é igual a %.2f \n",v1,v2,adic);
    }
    else if(res == 2){
        printf("Voce digitou 2. A subtração entre %.1f e %.1f é igual a %.2f \n",v1,v2,subt);
    }
    else if(res == 3){
        printf("Voce digitou 3. A multiplicação entre %.1f e %.1f é igual a %.2f \n",v1,v2,mult);
    }
    else if(res == 4){
        printf("Voce digitou 4. A divisão entre %.1f e %.1f é igual a %.2f \n",v1,v2,divis);
    }

// Caso o usuário tenha respondido algo errado.

    else{
        printf("O número que você digitou não corresponde a nenhuma operação.\n\n");
    }

    return 0;
}
