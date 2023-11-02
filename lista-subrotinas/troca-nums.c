#include <stdio.h>

int troca(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);

  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int aux = a;
  a = b;
  b = aux;

  printf("\nCom os valores trocados ficam respectivamente: %d e %d", a, b);
}

int main(void) {
  troca();
  return 0;
}