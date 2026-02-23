#include <math.h>
#include <stdio.h>

/*O programa faz com que apartir de um numero inteiro variavel num,
 *apartir da função lg, faz o log do num retornando o resultado de forma
  aredondada*/

int lg(double num) {
  double i, x;
  x = i = 0;
  i = log2(num);
  x = round(i);
  return x;
}

int main() {
  double num, piso;
  printf("Fale um numero: ");
  scanf("%lf", &num);
  piso = lg(num);
  printf("n: %lf", num);
  printf("x: %lf", piso);
  return 0;
}
