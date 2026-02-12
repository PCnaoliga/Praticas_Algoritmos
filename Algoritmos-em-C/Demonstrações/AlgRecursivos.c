#include <stdio.h>

/*Ao receber v e n>=1, esta funcao devolve o valor de
 *um elemento maximo do vetor v[0..n-1]*/
int MaximoR(int v[], int n) {
  if (n == 1) { // Caso o valor de n=1 que é o valor nulo
    return v[0];
  } else {
    int x;
    x = MaximoR(v, n - 1); // X recebe o vetor v[] e n-1
    if (x > v[n - 1]) {
      return x;
    } else {
      return v[n - 1];
    }
  }
}

int main() {
  int c, n;
  printf("Fale os valores\n");
  while ((c = getchar()) != EOF) {
    printf("Fale os valores\n");
    scanf("%d", &n);
  }
  return 0;
}
