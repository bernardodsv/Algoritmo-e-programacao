#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int v1,v2,v3,v4;
    printf("Digite a seguir 4 valores inteiro, DIFERENTES: \n");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &v1);
    printf("Digite um n�mero inteiro: ");
    scanf(" %d", &v2);
    printf("Digite um n�mero inteiro: ");
    scanf(" %d", &v3);
    printf("Digite um n�mero inteiro: ");
    scanf(" %d", &v4);
    float med = (v1+v2+v3+v4)/4;
    printf("A m�dia de %d,%d,%d e %d �: %.2f\n\n",v1,v2,v3,v4,med);
    printf("Aperte ENTER para continuar");
    getch();
    system("cls");
    if(v1>med){
        printf("O n�mero %d � %.2f maior que a m�dia %.2f\n",v1,med);
    }
     if(v2>med){
        printf("O n�mero %d � maior que a m�dia %.2f\n",v2,med);
    }
     if(v3>med){
        printf("O n�mero %d � maior que a m�dia %.2f\n",v3,med);
    }
     if(v4>med){
        printf("O n�mero %d � maior que a m�dia %.2f\n",v3,med);
    }
    system("pause");
    return 0;
}
