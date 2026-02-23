#include <math.h>
#include <stdio.h>

int CalcLog(int x) {
  double num;
  num = log2(x);
  return num;
}

int main() {
  int x;
  scanf("%d", &x);
  if (x > 0) {
    double result = CalcLog(x);
    printf("O logaritmo do numero digitado foi: %2f\n", result);
  } else {
    printf("Digite um numero maior que 0");
  }
  return 0;
}
