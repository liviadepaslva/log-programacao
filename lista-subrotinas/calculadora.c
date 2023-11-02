#include <stdio.h>
#include <string.h>

int somar(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int soma = a + b;

  printf("\n%d + %d = %d", a, b, soma);
}

int subtrair(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int sub = a - b;

  printf("\n%d - %d = %d", a, b, sub);
}

int multiplicar(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int mult = a * b;

  printf("\n%d x %d = %d", a, b, mult);
}

int dividir(void) {
  int a, b;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &a);
  printf("\nDigite o segundo valor: ");
  scanf("%d", &b);

  int div = a / b;

  printf("\n%d / %d = %d", a, b, div);
}

int main(void) {
  int i = 0;

  while (i != 1) {
    printf("\n\nEscolha a operação desejada\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\n5-sair\n\n");

    scanf("%d", &i);

    switch (i) {
    case 1:
      somar();
      break;
    case 2:
      subtrair();
      break;
    case 3:
      multiplicar();
      break;
    case 4:
      dividir();
      break;
      case 5:
      i = 1;
      printf("\n\nFechando programa...");
      break;
    }
  }
  return 0;
}