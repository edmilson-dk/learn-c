#include <stdio.h>

void calculatorMenu() {
  printf("\n-------- Calculator --------\n\n");
  printf("[1] - Somar\n[2] - Mutiplicar\n[3] - Dividir\n[4] - Subtrair\n");
}

int main() {
  int primary_number = 0;
  int second_number = 0;
  int option;
  int result;

  calculatorMenu();

  printf("Option: ");
  scanf("%d", &option);

  printf("\nPrimary number: ");
  scanf("%d", &primary_number);

  printf("\nSecond number: ");
  scanf("%d", &second_number);

  switch (option) {
    case 1:
      result = primary_number + second_number;
      break;
    
    case 2:
      result = primary_number * second_number;
      break;

    case 3:
      result = primary_number / second_number;
      break;

    case 4:
      result = primary_number - second_number;
      break;

    default:
      break;
  }

   printf("\nResultado: %d ", result);

  return 0;
}