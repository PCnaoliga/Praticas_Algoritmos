#include <stdio.h>

int Euclides(int m, int n) {
  int r;
  r = m % n;
  m = n;
  n = r;
  if (r != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main() {
  int result = Euclides(64, 16);
  printf("O valor do maior divisor comun é: %d", result);
  return result;
}

/*Recursão e quandp vc pega uma operação e divide ela em pequenas partes*/

/* do {
   r = m % n;
   m = n;
   n = r;
 } while (r != 0);*/
