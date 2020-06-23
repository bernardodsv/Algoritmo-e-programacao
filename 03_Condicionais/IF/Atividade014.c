/*  Uma fam�lia deseja informatizar suas despesas dom�sticas, pois seu filho est� cursando Ci�ncia da Computa��o.
Para o c�lculo, as despesas da fam�lia s�o: �gua, luz, telefone, condom�nio, mensalidade, sa�de, alimenta��o, vestu�rio,
transporte e seguran�a.
As receitas s�o o sal�rio do pai e o sal�rio da m�e.
Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total da fam�lia,
calcular o total de despesas e o saldo (receitas � despesas).
O programa deve mostrar ao usu�rio todos estes dados.
Ao lado do saldo, deve mostrar a mensagem conforme o valor: se o saldo for positivo, mostrar a mensagem �Saldo Positivo�;
se o saldo for negativo, mostrar a mensagem �Saldo Negativo�;
se o saldo for zero, mostrar a mensagem �Saldo Nulo�. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "portuguese");

    float agua, luz, telefone, condominio, mensalidade, saude, alimentacao, vestuario, transporte, seguranca;

    float pai, mae, despesas, receita, receita_final;

    printf("Esse programa calcular� as despesas domesticas de sua fam�lia conforme o sal�rio do pai e da m�e.\n");

    printf("Qual o sal�rio do seu pai? ");
    scanf(" %f", &pai);

    printf("Qual o sal�rio da sua m�e?");
    scanf(" %f", &mae);

    printf("Qual o valor das suas seguintes contas?\n");

    printf("�gua: ");
    scanf("%f",&agua);

    printf("Luz: ");
    scanf("%f",&luz);

    printf("Condom�nio: ");
    scanf("%f",&condominio);

    printf("Mensalidade: ");
    scanf("%f",&mensalidade);

    printf("Sa�de: ");
    scanf("%f",&saude);

    printf("Alimenta��o: ");
    scanf("%f",&alimentacao);

    printf("Vestu�rio: ");
    scanf("%f",&vestuario);

    printf("Transporte: ");
    scanf("%f",&transporte);

    printf("Seguran�a: ");
    scanf("%f",&seguranca);


    printf("Aperte ENTER para ver a receita da fam�lia e suas despesas \n");

    getch();
    system("cls");

    receita = (pai + mae);
    despesas = (agua+luz+telefone+condominio+mensalidade+saude+alimentacao+vestuario+transporte+seguranca);

    printf("A receita do sal�rio da m�e mais o do pai � igual a %.2f\n",receita);

    printf("O valor das despesas com todas as contas � igual a %.2f\n", despesas);



    printf("Aperte ENTER para ver quanto sobra da receita de sal�rio p�s pagamento das contas \n");

    getch();
    system("cls");

    receita_final = (receita - despesas);


    printf("Ap�s o pagamento das contas a receita da fam�lia � igual a %.2f\n",receita_final);

    if (receita_final > 0){
        printf("A fam�lia ficou com saldo positivo\n");
    }
    else if(receita_final == 0){
        printf("Saldo nulo.\n");
    }
    else{
        printf("A fam�lia ficou com saldo negativo\n");
    }


    system("pause");
    return 0;
}
