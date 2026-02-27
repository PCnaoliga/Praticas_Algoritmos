#include <stdio.h>
#include <stdlib.h>

void imprimir(int *w) { // Uma funcao void que tem como parametro um vetor por
                        // meio do ponteiro w que recebe X
  printf("w1: %d, w2: %d, w3: %d\n", w[0], w[1], w[2]); // Printar os valores
  printf("&w: %p, w:%p, *w: %i\n ", &w, w, *w);
  // Printar o endereco de memoria de w que vai ser o do proprio w
  // O endereco de memoria que vai ser do x e o valor que vai ser o
  // msm que x
  w[0] = 4;
  w[1] = 23;
  w[2] = 54;
  // Ao mudar os valores vai mudar os valores do vetor
}

int main() {
  int x[3] = {1, 2, 7};
  printf("x1: %d, x2: %d, x3: %d\n", x[0], x[1], x[2]);
  printf("&x: %p, x:%p, *x: %i\n ", &x, x, *x);
  imprimir(x);
  printf("x1: %d, x2: %d, x3: %d\n", x[0], x[1], x[2]);
  printf("&x: %p, x:%p, *x: %i\n ", &x, x, *x);

  int *y = (int *)malloc(sizeof(int) * 3);
  // Outra forma de criar um vetor, alocando memoria
  y[0] = 5;
  y[1] = 6;
  y[2] = 7;
  printf("y1: %d, y2: %d, y3: %d\n", y[0], y[1], y[2]);
  printf("&y: %p, y:%p, *y: %i\n ", &y, y, *y);

  *y = *x;
  printf("y1: %d, y2: %d, y3: %d\n", y[0], y[1], y[2]);
  // Vai trocar o valor do y[0] para x[0]

  free(y);
  // Liberar a memoria de Y

  y = (int *)x;
  printf("y1: %d, y2: %d, y3: %d\n", y[0], y[1], y[2]);
  // Vai referenciar o vetor X e a memoria do Y vai ainda ser usada mas nao
  // apontada
  return 0;
}
