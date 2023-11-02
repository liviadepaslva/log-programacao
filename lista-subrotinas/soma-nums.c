#include <stdio.h>

int soma(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int soma = a + b;

  printf("\nA soma dos valores %d + %d = %d", a, b, soma);
}

int main(void) {
  soma();
  return 0;
}