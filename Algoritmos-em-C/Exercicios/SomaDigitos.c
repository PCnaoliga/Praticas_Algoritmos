#include <stdio.h>

int soma(int n) {
  int ultimoD = 0;
  for (int i = n; i > 0; i = i / 10) {
    ultimoD += (i % 10);
  }
  return ultimoD;
}

int main() {
  int num, result;
  printf("Fale o numero para fazer a soma\n");
  scanf("%d", &num);
  if (num < 10) {
    printf("Para funcionar digite um numero maior que 10\n");
  }
  result = soma(num);
  printf("O resultado da soma foi %d", result);
}
