#include <stdio.h>

int multiplicar(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int mult = a * b;

  printf("\n%d * %d = %d", a, b, mult);
}

int main(void) {
  multiplicar();
  return 0;
}