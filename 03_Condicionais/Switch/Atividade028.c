/* Escrever um algoritmo para oferecer ao usu�rio a possibilidade de calcular a velocidade m�dia
a dist�ncia percorrida e/ou o tempo gasto. Sempre que o usu�rio escolher uma das op��es, dever� informar
ao sistema as outras duas informa��es. Ex: Usuario escolhendo velocidade m�dia, deve infomar o tempo
e a sit�ncia percorrida. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float DistanciaPercorrida, TempoGasto, VelocidadeMedia;
    char opcao;

    printf("Calculadora para velocidade m�dia, dist�ncia percorrida ou tempo gasto!!\n\n");

    // Pedindo para o usuario digitar a op��o desejada.(Velocidade/Tempo/Distancia)
    printf("Digite 'v' para calcularmos a velocidade m�dia.\n");
    printf("Digite 't' para calcularmos o tempo gasto.\n");
    printf("Ou digite 'd' para calcular a dist�ncia.\n");
    printf("Op��o: ");
    scanf("%c", &opcao);

    system("cls");

    // Aplicando a condicional SWITCH, dependendo da resposta ser� um determinado calculo.
    switch (opcao){
        case 'v':
            printf("Digite a dist�ncia percorrida em km: ");
            scanf("%f", &DistanciaPercorrida);

            printf("Digite o tempo gasto em minutos: ");
            scanf("%f", &TempoGasto);

            system("cls");

            VelocidadeMedia = (DistanciaPercorrida / (TempoGasto / 60));
            printf("Distancia percorrida foi de %.2f Km o tempo gasto foi de %.2f minutos e a velocidade m�dia �: %.2fkm/h\n\n",DistanciaPercorrida, TempoGasto, VelocidadeMedia);
        break;

        case 't':
            printf("Digite a dist�ncia percorrida em km: ");
            scanf(" %f", &DistanciaPercorrida);

            printf("Digite a velocidade media em km/h: ");
            scanf(" %f", &VelocidadeMedia);

            system("cls");

            TempoGasto = (DistanciaPercorrida / VelocidadeMedia);
            printf("A dist�ncia percorrida foi de %.2f km a velocidade m�dia foi de %.2f km/h e o tempo gasto foi de: %.2f horas.\n\n",DistanciaPercorrida,VelocidadeMedia, TempoGasto);
        break;

        case 'd':
            printf("Digite o tempo gasto em minutos: ");
            scanf("%f", &TempoGasto);

            printf("Digite a velocidade media em km/h: ");
            scanf("%f", &VelocidadeMedia);

            system("cls");

            DistanciaPercorrida = (VelocidadeMedia *(TempoGasto/60));
            printf("O tempo gasto foi de %.2f minutos a velocidade m�dia foi de %.2f km/h e adist�ncia percorrida foi de: %.2fKm.\n\n",TempoGasto, VelocidadeMedia, DistanciaPercorrida);
        break;

        default:
            printf("Erro!\n");
    }

    system("pause");
    return 0;
}
