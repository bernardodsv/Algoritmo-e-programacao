#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
 int v1,v2,v3;
    printf("Digite a seguir 3 valores inteiro, DIFERENTES: \n");
    printf("Digite um número inteiro:");
    scanf("%d", &v1);
    printf("Digite um número inteiro:");
    scanf( "%d", &v2);
    printf("Digite um número inteiro:");
    scanf( "%d", &v3);
    printf("Os valores são: \n%d\n%d\n%d\n\n",v1,v2,v3);
    printf("Pressione ENTER para continuar.");
    getch();
    system("cls");
    if ((v1 > v2) && (v1>v3)){
        printf("%d é maior que %d e %d\n",v1,v2,v3);
    }
    if ((v2 > v1) && (v2>v3)){
        printf("%d é maior que %d e %d\n",v2,v1,v3);
    }
    if ((v3 > v1) && (v3>v2)){
        printf("%d é maior que %d e %d\n",v3,v1,v2);
    }
    if ((v1 < v2) && (v1<v3)){
        printf("%d é menor que %d e %d\n",v1,v2,v3);
    }
    if ((v2 < v1) && (v2<v3)){
        printf("%d é menor que %d e %d\n",v2,v1,v3);
    }
    if ((v3 < v1) && (v3<v2)){
        printf("%d é menor que %d e %d\n",v3,v1,v2);
    }
    system("pause");
    return 0;
}
