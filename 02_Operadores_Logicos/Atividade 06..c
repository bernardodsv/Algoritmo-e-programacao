#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int v1 = 15;
    int v2 = 5;
    int v3 = 20;
    int resultado1= v1 > v2 && v1>v3;
    int resultado2=v1 == v2 && v1<v3;
    int resultado3=v1>v2 && v1<v3;
    int resultado4=v2<v3 && v3>v1;
    int resultado5=v3>v2 || v1>v2;
    int resultado6=v2>v1 || v2<v3;
    int resultado7=v3<v1 || v3>v2;
    // 2 OPERADORES LÓGICOS
    printf("\t Lembrando que:\n""0 é FALSO e 1 é VERDADEIRO!!\n\n");
    printf("V1=%d\n",v1);
    printf("V2=%d\n",v2);
    printf("V3=%d\n\n",v3);
    printf("%d é maior que %d e %d é maior que %d? %d\n",v1,v2,v1,v3,resultado1);
    printf("%d é igual a %d e %d é menor que %d? %d\n",v1,v2,v1,v3,resultado2);
    printf("%d é maior que %d e %d é menor que %d? %d\n",v1,v2,v1,v3,resultado3);
    printf("%d é menor que %d e %d é maior que %d? %d\n",v2,v3,v3,v1,resultado4);
    printf("%d é maior que %d ou %d é maior que %d? %d\n",v3,v2,v1,v2,resultado5);
    printf("%d é maior que %d ou %d é menor que %d? %d\n",v2,v1,v2,v3,resultado6);
    printf("%d é menor que %d ou %d é maior que %d? %d\n",v3,v1,v3,v2,resultado7);
    system("pause");
    return 0;
}
