#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Status { CONTINUE, WON, LOST };

int jogaDados(void) {
  int dado_one;
  int dado_two;
  int total;

  dado_one = 1 + (rand() % 6);
  dado_two = 1 + (rand() % 6);
  
  total = dado_one + dado_two;

  printf( "Jogador lançou %d + %d = %d\n", dado_one, dado_two, total);
  return total;
}

int main() {
  int sum;
  int myPoint;

  srand(time(NULL));
  enum Status gameStatus;

  sum = jogaDados();

  switch (sum)
  {
  case 7:
  case 11:
    gameStatus = WON;
    break;

  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;
  
  default:
    gameStatus = CONTINUE;
    myPoint = sum;
    printf("Pontuação é %d\n", myPoint);
    break;
  }

  while (gameStatus == CONTINUE) {
    sum = jogaDados();

    if (sum == myPoint) {
      gameStatus = WON;
    } else if (sum == 7) {
      gameStatus = LOST;
    }
  }

  if (gameStatus == WON) {
    printf("Jogador venceu :)");
  } else {
    printf("Jogador perdeu :(");
  }

  return 0;
}