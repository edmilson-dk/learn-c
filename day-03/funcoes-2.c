#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// gerando dados aleatorios 

int main() {
  int rodadas = 0;

  srand(time(NULL));

  printf("Quntas vezes você deseja jogar os dados? ");
  scanf("%d", &rodadas);

  for (int i = 0; i < rodadas; i++) {
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) printf("\n");
  }

  return 0;
}
