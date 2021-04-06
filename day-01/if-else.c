#include <stdio.h>

int main() {
  int age = 0;

  printf("Digite sua idade: ");
  scanf("%d", &age);

  if (age <= 17) {
    printf("Você ainda é menor de idade");
  } else if (age >= 18) {
    printf("Você é maior de idade :)");
  }

  return 0;
}