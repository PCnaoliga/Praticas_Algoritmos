#include <stdio.h>

int busca(int x, int v[], int n) {
  int k;
  int p[n];
  k = n - 1;
  while (k >= 0 && v[k] != x) {
    k = k - 1;
  }
  return k;
}

int main() {
  int v[5] = {1, 2, 3, 4, 5};
  int x = 5;
  int n = 6;
  int result = busca(x, v, n);
  printf("%d", result);
  return 0;
}

// Oque é para fazer armazenar o v[n]
// Colocar o valor de X em V[n]
// se x = n, ent return n;
// se x < n, ent return x;
