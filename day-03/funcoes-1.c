#include <stdio.h>

int square(int v) {
  return v * v;
}

int velocidadeMedia(int tempo, int distancia) {
  return distancia / tempo;
}

int main() {
  int v;

  printf("Digite um numero: ");
  scanf("%d", &v);

  printf("O quadrado de %d é %d", v, square(v));

  return 0;
}