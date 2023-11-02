#include <stdio.h>

int maiornum(int *array) {
  int maiornum = 0;
  for (int i = 0; i < 7; i++) {
    if (array[i] >= maiornum) {
      maiornum = array[i];
    }
  }
  return maiornum;
}

int main(void) {
  int array[7];
  
  for (int i = 0; i < 7; i++) {
    printf("\nDigite o número da posição %d do array: ", i);
    scanf("%d", &array[i]);
  }
  
  printf("\n\nO maior número do array é: %d.", maiornum(array));
  return 0;
}