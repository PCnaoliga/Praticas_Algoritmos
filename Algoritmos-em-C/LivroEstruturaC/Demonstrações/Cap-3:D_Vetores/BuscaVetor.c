#include <stdio.h>

int Busca(int x, int v[], int n) {
  int k;
  k = n - 1;
  while (k >= 0 && v[k] != x) {
    k = k - 1;
  }
  return k;
}

int main() {
  int v[5] = {1, 2, 3, 4, 5};
  int x = 5; // Valor que quer ser achado
  int n = 5; // Delimitador do vetor
  int result = Busca(x, v, n);
  printf("%d", result);
  return 0;
}
