#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    /* Propagama pra monitorar temperatura e umidade de um leito no hospital

    Faixa normal de operação(temp)= 23 e 25²c
    Faixa normal de operação (umidade)= 70% e 90%

    */
    //Usarmos 'fflush(stdin);' para limpar o buffer quando usarmos variaveis de diferentes modos.
    float temp,umid;
    printf("Digite a temperatura do leito: ");
    scanf("%f",&temp);
    printf("Digite a umidade em porcentagem: ");
    scanf(" %f", &umid);
    if ((temp>=23) && (temp<=25) && (umid>=70) && (umid<=90)){
        printf("Tudo ok com o leito.\n\n");
        printf("Temperatura=%.1f°C e umidade=%.1f\n",temp,umid);
        return 0;
    }
        printf("Há algo de errado com o leito.\n");

    return 0;
}
