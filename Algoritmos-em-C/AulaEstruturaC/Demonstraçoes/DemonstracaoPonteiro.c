#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
  int x = 25;  // Enviado 25 para a variavel X
  int *y = &x; // Armazenado o endereco de X
  *y = 30;     // Armazenado 30 no endereco salvo que foi o msm do X
  printf("Valor atual de X é: %d\n", x);
  */

  int *y = (int *)malloc(sizeof(int));
  *y = 20;
  int z = sizeof(int);
  printf("Valor *y=%i Valor de z=%i\n", *y, z);

  return 0;
}
