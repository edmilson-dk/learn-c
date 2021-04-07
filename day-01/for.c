#include <stdio.h>

int main() {
  int lines = 0;
  int maxLines = 0;

  printf("Quantas linhas você quer que a pirâmide tenha? ");
  scanf("%d", &maxLines);

  maxLines  = maxLines <= 0 ? 10 : maxLines;

  for (; lines <= maxLines; lines++) {
    for (int chars = 0; chars <= lines; chars++) {
      printf("#");  
    }
    printf("\n");
  }

  return 0;
}