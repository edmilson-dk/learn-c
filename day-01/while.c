#include <stdio.h>

int main() {
  int number = 0;
  int operador = 1;
  int result = 0;

  printf("Digite um numero para ver sua tabuada de 10: ");
  scanf("%d", &number);
  printf("\n");

  if (number <= 0) {
    printf("Valor inválido!");
    return 0;
  }

  while (operador <= 10) {
    result = number * operador;
    printf("%d X %d = %d\n", number, operador, result);
    operador+=1;
  }

  return 0;
}