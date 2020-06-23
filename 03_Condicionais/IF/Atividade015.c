/* Escreva um algoritmo para ler o salário mensal de um funcionário e calcule o desconto do INSS,
levando em consideração a tabela abaixo:

Salário   até R$ 1.200,00    de R$ 1.200,01 a R$ 2.300,00            A partir de R$ 2.300,01

Alíquota        8,00 %                  9,00 %                              11,00 %


O algoritmo deverá apresentar como resultado o salário mensal do funcionário,
 o percentual de desconto do INSS e o valor em Reais do desconto do INSS e o
 salário líquido (salário mensal menos o valor do INSS). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL,"portuguese");

    float salario, desconto1, salariof1, desconto2, salariof2, desconto3, salariof3;
    printf("Esse programa calculará o seu salário e o desconto do INSS.\n");

    printf("Digite o seu salário: ");
    scanf("%f",&salario);

    desconto1 = (salario*8)/100;
    salariof1 = (salario - desconto1);

    desconto2 =(salario*9)/100;
    salariof2 =(salario-desconto2);

    desconto3 =(salario*11)/100;
    salariof3 =(salario-desconto3);



    if (salario <= 1200){
            printf("O seu salário é R$ %.2f e o seu desconto é de 8%%.\n", salario);
            printf("O seu salário liquido é de R$ %.2f\n", salariof1);
    }
    else if ((salario >= 1200,01) && (salario <= 2300)){
        printf("O seu salário é R$ %.2f e o seu desconto é de 9%%.\n", salario);
        printf("O seu salário liquido é de R$ %.2f\n", salariof2);
    }
    else{
        printf("O seu salário é R$ %.2f e o seu desconto é de 11%%.\n", salario);
        printf("O seu salário liquido é de R$ %.2f\n", salariof3);
    }

    return 0;
}
