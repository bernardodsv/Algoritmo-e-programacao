/* Escrever um algoritmo para oferecer ao usuário a possibilidade de calcular a velocidade média
a distância percorrida e/ou o tempo gasto. Sempre que o usuário escolher uma das opções, deverá informar
ao sistema as outras duas informações. Ex: Usuario escolhendo velocidade média, deve infomar o tempo
e a sitância percorrida. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float DistanciaPercorrida, TempoGasto, VelocidadeMedia;
    char opcao;

    printf("Calculadora para velocidade média, distância percorrida ou tempo gasto!!\n\n");

    // Pedindo para o usuario digitar a opção desejada.(Velocidade/Tempo/Distancia)
    printf("Digite 'v' para calcularmos a velocidade média.\n");
    printf("Digite 't' para calcularmos o tempo gasto.\n");
    printf("Ou digite 'd' para calcular a distância.\n");
    printf("Opção: ");
    scanf("%c", &opcao);

    system("cls");

    // Aplicando a condicional SWITCH, dependendo da resposta será um determinado calculo.
    switch (opcao){
        case 'v':
            printf("Digite a distância percorrida em km: ");
            scanf("%f", &DistanciaPercorrida);

            printf("Digite o tempo gasto em minutos: ");
            scanf("%f", &TempoGasto);

            system("cls");

            VelocidadeMedia = (DistanciaPercorrida / (TempoGasto / 60));
            printf("Distancia percorrida foi de %.2f Km o tempo gasto foi de %.2f minutos e a velocidade média é: %.2fkm/h\n\n",DistanciaPercorrida, TempoGasto, VelocidadeMedia);
        break;

        case 't':
            printf("Digite a distância percorrida em km: ");
            scanf(" %f", &DistanciaPercorrida);

            printf("Digite a velocidade media em km/h: ");
            scanf(" %f", &VelocidadeMedia);

            system("cls");

            TempoGasto = (DistanciaPercorrida / VelocidadeMedia);
            printf("A distância percorrida foi de %.2f km a velocidade média foi de %.2f km/h e o tempo gasto foi de: %.2f horas.\n\n",DistanciaPercorrida,VelocidadeMedia, TempoGasto);
        break;

        case 'd':
            printf("Digite o tempo gasto em minutos: ");
            scanf("%f", &TempoGasto);

            printf("Digite a velocidade media em km/h: ");
            scanf("%f", &VelocidadeMedia);

            system("cls");

            DistanciaPercorrida = (VelocidadeMedia *(TempoGasto/60));
            printf("O tempo gasto foi de %.2f minutos a velocidade média foi de %.2f km/h e adistância percorrida foi de: %.2fKm.\n\n",TempoGasto, VelocidadeMedia, DistanciaPercorrida);
        break;

        default:
            printf("Erro!\n");
    }

    system("pause");
    return 0;
}
