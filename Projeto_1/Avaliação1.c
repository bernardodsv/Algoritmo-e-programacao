/* Escrever um algoritmo, em Linguagem C, para realizar a o
cálculo do IMC (Índice de Massa Corporal) de uma pessoa,
cuja fórmula do cálculo é dividir o peso pela altura elevada ao quadrado.
Dessa forma o algoritmo deve solicitar, ao usuário, os valores de peso em kg (exemplo: 82.5)
e altura em metros (exemplo: 1.76) e aplicar o cálculo. Além disso, de acordo com o resultado do cálculo do IMC,
deverá ser apresentada, na tela do computador, uma mensagem correspondente. Para isso,
considere as seguintes mensagens de acordo com o IMC encontrado:
IMC             /       Mensagem
Menos do que 18.5 	Abaixo do peso
Entre 18.5 e 24.9 	Peso normal
Entre 25 e 29.9 	Sobrepeso
Entre 30 e 34.9 	Obesidade grau 1
Entre 35 e 39.9 	Obesidade grau 2
Mais do que 40 	Obesidade grau 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando as variáveis do programa.
    float peso,altura,IMC;

    // Apresentação do que iremos realizar no programa.
    printf("Neste programa calcularemos o seu IMC (Índice de Massa Corporal) \n");

    printf("Para isso, precisaremos de seu peso e altura.\n\nAperte ENTER para continuar.");

    // Pausando o algoritmo e limpando a tela.
    getch();
    system("cls");

    // Armazenando os dados.
    printf("Peso em kilos: ");
    scanf("%f", &peso);

    printf("Sua altura em metros: ");
    scanf(" %f", &altura);

    // Calculando  o IMC.
    IMC= (peso / (altura*altura));

    // Fazendo as condicionais.

    // 1° -> IMC abaixo de 18,5 = Abaixo do peso.
    if (IMC < 18.50){
        printf("IMC= %.2f, você está abaixo do peso.\n",IMC);
    }
    // 2° -> IMC entre 18,5 e 24,9 = Peso ideal.
    else if ((IMC <= 24.90)){
        printf("IMC= %.2f, você está com peso normal.\n",IMC);
    }
    // 3° -> IMC entre 25 e 29,9 = Sobrepeso
    else if (IMC  <= 29.90){
        printf("IMC= %.2f, você está com sobrepeso.\n",IMC);
    }
    // 4° -> IMC entre 30 e 34,9 = Opesidade 1
    else if (IMC <= 34.9 ){
        printf("IMC= %.2f, você está com Obesidade grau 1.\n",IMC);
    }
    // 5° -> IMC entre 35 e 39,9 = Obesidade 2.
    else if (IMC <= 39.9){
        printf("IMC= %.2f, você está com Obesidade grua 2.\n",IMC);
    }
    // 6° -> IMC maior ou igual a 40 = Obesidade 3.
    else{
        printf("Você está com IMC= %2.f, Obesidade grau 3!\nProcure um medico imediatamente.\n",IMC);
    }

    system("pause");
    return 0;
}
