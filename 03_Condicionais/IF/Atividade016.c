/* Faça um radar móvel. Veículos acima de 60km/h(+8% de tolerância) acionarão a câmera para o registro da placa do carro,
veículos que passarem a 60km/h ou menos apenas seguem viagem. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando a variável velocidade do carro.
    double velocidade_carro;

    // Recebendo a velocidade do carro.
    printf("Digite a velocidade registrada pelo radar: ");
    scanf("%lf", &velocidade_carro);

    // Limpando a janela do usuário.
    system("cls");

    // Adicionando condicionais ao algoritmo;
    // Veiculos acima de 60km/h serão multados.
    if (velocidade_carro > 64.8){
        printf("Velocidade do carro é igual a: %.1lf \n",velocidade_carro);
        printf("Veículo acima da velocidade permitida. \n ");
        printf("Placa registrada pelo radar móvel!\n");
    }
    else {
        printf("Velocidade do carro é igual a: %.1lf \n ",velocidade_carro);
        printf("Veículo com velocidade permitida! \n Pode seguir viagem! \n ");
    }

    system("pause");
    return 0;
}
