/* Fa�a um radar m�vel. Ve�culos acima de 60km/h(+8% de toler�ncia) acionar�o a c�mera para o registro da placa do carro,
ve�culos que passarem a 60km/h ou menos apenas seguem viagem. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    // Declarando a vari�vel velocidade do carro.
    double velocidade_carro;

    // Recebendo a velocidade do carro.
    printf("Digite a velocidade registrada pelo radar: ");
    scanf("%lf", &velocidade_carro);

    // Limpando a janela do usu�rio.
    system("cls");

    // Adicionando condicionais ao algoritmo;
    // Veiculos acima de 60km/h ser�o multados.
    if (velocidade_carro > 64.8){
        printf("Velocidade do carro � igual a: %.1lf \n",velocidade_carro);
        printf("Ve�culo acima da velocidade permitida. \n ");
        printf("Placa registrada pelo radar m�vel!\n");
    }
    else {
        printf("Velocidade do carro � igual a: %.1lf \n ",velocidade_carro);
        printf("Ve�culo com velocidade permitida! \n Pode seguir viagem! \n ");
    }

    system("pause");
    return 0;
}
