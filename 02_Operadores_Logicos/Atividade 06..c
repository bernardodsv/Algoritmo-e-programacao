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
    // 2 OPERADORES L�GICOS
    printf("\t Lembrando que:\n""0 � FALSO e 1 � VERDADEIRO!!\n\n");
    printf("V1=%d\n",v1);
    printf("V2=%d\n",v2);
    printf("V3=%d\n\n",v3);
    printf("%d � maior que %d e %d � maior que %d? %d\n",v1,v2,v1,v3,resultado1);
    printf("%d � igual a %d e %d � menor que %d? %d\n",v1,v2,v1,v3,resultado2);
    printf("%d � maior que %d e %d � menor que %d? %d\n",v1,v2,v1,v3,resultado3);
    printf("%d � menor que %d e %d � maior que %d? %d\n",v2,v3,v3,v1,resultado4);
    printf("%d � maior que %d ou %d � maior que %d? %d\n",v3,v2,v1,v2,resultado5);
    printf("%d � maior que %d ou %d � menor que %d? %d\n",v2,v1,v2,v3,resultado6);
    printf("%d � menor que %d ou %d � maior que %d? %d\n",v3,v1,v3,v2,resultado7);
    system("pause");
    return 0;
}
