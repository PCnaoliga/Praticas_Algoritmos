#include <stdio.h>
#include <sys/types.h>

int fibonat(int n) { return n; }

int main() {
  int n, result;
  scanf("%d", &n);
  if (n > 1) {
    result = fibonat(n);
  } else {
    printf("Digite um numero maior que 1");
  }
  printf("O numero %d da sequencia é: %d", n, result);
  return 0;
}
