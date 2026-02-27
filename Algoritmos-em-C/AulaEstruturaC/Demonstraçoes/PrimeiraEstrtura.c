#include <stdio.h>

#define ALTURAMAX 225

typedef struct {
  int peso;
  int altura;
} PesoAltura;

int main() {
  PesoAltura pessoa1;
  pessoa1.peso = 80;
  pessoa1.altura = 185;
  printf("Peso: %i Altura: %i\n", pessoa1.peso, pessoa1.altura);
  if (pessoa1.altura > ALTURAMAX) {
    printf("Altura acima da media");
  } else {
    printf("Altura abaixo da media");
  }
  return 0;
}
