#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Jogo da velha em C.

// Explicação de como foi feito:

// Primeiro criei uma função extra "tabuleiro". Para desenhar o tabuleiro e poder usar a função quando eu quiser.

// Após isso usei o do while para começar todo o código. Dentro, coloquei muitos comandos condicionais e laços de repetitição.

void tabuleiro(char casas2[9]){
  system("cls"); // Limpar a tela sempre que o tabuleiro aparecer, para ele"carregar".
  printf("\t %c | %c | %c \n",casas2[0],casas2[1],casas2[2]);
  printf("\t-----------\n");
  printf("\t %c | %c | %c \n",casas2[3],casas2[4],casas2[5]);
  printf("\t-----------\n");
  printf("\t %c | %c | %c \n",casas2[6],casas2[7],casas2[8]);
}

int main(){

  setlocale(LC_ALL,"portuguese");

  printf("|==============================|\n");
  printf("|                              |\n");
  printf("|   SEJA BEM VINDO AO GAME     |\n");
  printf("|                              |\n");
  printf("|    PARA COME�AR APERTE       |\n");
  printf("|                              |\n");
  printf("|           ENTER              |\n");
  printf("|______________________________|\n");

  getch();

  char casas[9] = {'1','2','3','4','5','6','7','8','9'};
  tabuleiro(casas); // Aqui estamos jogando o valor de casas, para dentro da funnção 'tabuleiro'.

  char jogar_novamente;
  int contador_jogadas,jogadas,vez=0,i;
  do{
    contador_jogadas = 1; //começa sempre em 1

    for(i=0;i<=8;i++){  // LIMPANDO O TABULEIRO
      casas[i] = ' ';
    }

    do{
      tabuleiro(casas);
      printf("Digite em qual casa deseja marcar a jogada ? ['1' - '9']\n");
      scanf("%i",&jogadas);

      if (jogadas < 1 || jogadas > 9){ //se a jogada for nula, recebe 0, para tentar outra vez.
        jogadas = 0;
      }
      else if(casas[jogadas-1] != ' '){ //'-1' pois ele começa na casa 0.
        jogadas = 0;
      }
      else{
        if(vez%2==0){ // Se for um numero par é o X quem joga
          casas[jogadas-1] = 'X';
        }
        else{ // Se for impar é a vez do O
          casas[jogadas-1] = 'O';
        }
      }

        // Sempre que alguem jogar, o contador recebe +1 e a vez também. Pois so pode ir até 9.
        contador_jogadas++;
        vez++;

      // CONDIÇÕES PARA VITORIA E ENCERRAMENTO DO GAME!!!! //

      // PRIMEIRO AS VITORIAS DE X NA LINHA:
      if((casas[0]=='X') &&(casas[1]=='X')&&(casas[2]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[3]=='X') &&(casas[4]=='X')&&(casas[5]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[6]=='X') &&(casas[7]=='X')&&(casas[8]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }

      // AGORA A VITORIA DE X NAS COLUNAS
      if((casas[0]=='X') &&(casas[3]=='X')&&(casas[6]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[1]=='X') &&(casas[4]=='X')&&(casas[7]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[2]=='X') &&(casas[5]=='X')&&(casas[8]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }

      // AGORA A VITORIA DE X NAS DIAGONAIS
      if((casas[0]=='X') &&(casas[4]=='X')&&(casas[8]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[2]=='X') &&(casas[4]=='X')&&(casas[6]=='X')){
        contador_jogadas = 11; // Pois o tabuleiro aceita 9 jogadas.
      }

      //                  VITORIAS DE O                            //

      // AS VITORIAS DE O NA LINHA:
      if((casas[0]=='O') &&(casas[1]=='O')&&(casas[2]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[3]=='O') &&(casas[4]=='O')&&(casas[5]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[6]=='O') &&(casas[7]=='O')&&(casas[8]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }

      // AS VITORIA DE O NAS COLUNAS
      if((casas[0]=='O') &&(casas[3]=='O')&&(casas[6]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[1]=='O') &&(casas[4]=='O')&&(casas[7]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[2]=='O') &&(casas[5]=='O')&&(casas[8]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }

      // A VITORIA DE O NAS DIAGONAIS
      if((casas[0]=='O') &&(casas[4]=='O')&&(casas[8]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }
      if((casas[2]=='O') &&(casas[4]=='O')&&(casas[6]=='O')){
        contador_jogadas = 12; // Pois o tabuleiro aceita 9 jogadas.
      }

    }
    while(contador_jogadas <= 9); // so podem 9 jogadas.
    tabuleiro(casas);

    if(contador_jogadas == 10){
      printf("Empate!!!!\n");
    }
    if(contador_jogadas == 11){
      printf("Vitória do X !!!");
    }
    if(contador_jogadas == 12){
      printf("Vitória de O !!! \n");
    }

    printf("Gostaria de jogar outra vez ?['S' - 'N']\n");
    scanf("%s",&jogar_novamente);
  }
  while(jogar_novamente == 's');


  return 0;
}
