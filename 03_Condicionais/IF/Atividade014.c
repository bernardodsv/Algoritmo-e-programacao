/*  Uma família deseja informatizar suas despesas domésticas, pois seu filho está cursando Ciência da Computação.
Para o cálculo, as despesas da família são: água, luz, telefone, condomínio, mensalidade, saúde, alimentação, vestuário,
transporte e segurança.
As receitas são o salário do pai e o salário da mãe.
Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total da família,
calcular o total de despesas e o saldo (receitas – despesas).
O programa deve mostrar ao usuário todos estes dados.
Ao lado do saldo, deve mostrar a mensagem conforme o valor: se o saldo for positivo, mostrar a mensagem “Saldo Positivo”;
se o saldo for negativo, mostrar a mensagem “Saldo Negativo”;
se o saldo for zero, mostrar a mensagem “Saldo Nulo”. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "portuguese");

    float agua, luz, telefone, condominio, mensalidade, saude, alimentacao, vestuario, transporte, seguranca;

    float pai, mae, despesas, receita, receita_final;

    printf("Esse programa calculará as despesas domesticas de sua família conforme o salário do pai e da mãe.\n");

    printf("Qual o salário do seu pai? ");
    scanf(" %f", &pai);

    printf("Qual o salário da sua mãe?");
    scanf(" %f", &mae);

    printf("Qual o valor das suas seguintes contas?\n");

    printf("Água: ");
    scanf("%f",&agua);

    printf("Luz: ");
    scanf("%f",&luz);

    printf("Condomínio: ");
    scanf("%f",&condominio);

    printf("Mensalidade: ");
    scanf("%f",&mensalidade);

    printf("Saúde: ");
    scanf("%f",&saude);

    printf("Alimentação: ");
    scanf("%f",&alimentacao);

    printf("Vestuário: ");
    scanf("%f",&vestuario);

    printf("Transporte: ");
    scanf("%f",&transporte);

    printf("Segurança: ");
    scanf("%f",&seguranca);


    printf("Aperte ENTER para ver a receita da família e suas despesas \n");

    getch();
    system("cls");

    receita = (pai + mae);
    despesas = (agua+luz+telefone+condominio+mensalidade+saude+alimentacao+vestuario+transporte+seguranca);

    printf("A receita do salário da mãe mais o do pai é igual a %.2f\n",receita);

    printf("O valor das despesas com todas as contas é igual a %.2f\n", despesas);



    printf("Aperte ENTER para ver quanto sobra da receita de salário pós pagamento das contas \n");

    getch();
    system("cls");

    receita_final = (receita - despesas);


    printf("Após o pagamento das contas a receita da família é igual a %.2f\n",receita_final);

    if (receita_final > 0){
        printf("A família ficou com saldo positivo\n");
    }
    else if(receita_final == 0){
        printf("Saldo nulo.\n");
    }
    else{
        printf("A família ficou com saldo negativo\n");
    }


    system("pause");
    return 0;
}
