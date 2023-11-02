#include <stdio.h>

int subtrair(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int sub = a - b;

  printf("\nA subtração dos valores fica %d - %d = %d", a, b, sub);
}

int main(void) {
  subtrair();
  return 0;
}