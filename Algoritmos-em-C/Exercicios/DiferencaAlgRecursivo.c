#include <stdio.h>

int EleMax(int v[], int n) {
  if (n == 1) {
    return v[0];
  } else {
    int x;
    x = EleMax(v, n - 1);
    if (x > v[n - 1]) {
      return x;
    } else {
      return v[n - 1];
    }
  }
}

int EleMin(int v[], int n) {
  if (n == 1) {
    return v[0];
  } else {
    int x;
    x = EleMin(v, n - 1);
    if (x < v[n - 1]) {
      return x;
    } else {
      return v[n - 1];
    }
  }
}

int main() {
  int tamanho;
  printf("Escreva o tamanho do vetor\n");
  scanf("%d", &tamanho);

  int vetor[tamanho];
  for (int i = tamanho; i >= 0; i--) {
    printf("Fale o numero %d:\n", i);
    scanf("%d", &vetor[i]);
  }

  int ValorMax = EleMax(vetor, tamanho);
  int ValorMin = EleMin(vetor, tamanho);

  int diferenca;
  diferenca = ValorMax - ValorMin;

  printf("A diferenca entre o maior valor: %d e o menor valor: %d é: %d\n",
         ValorMax, ValorMin, diferenca);
  return 0;
}

/*Algoritmo Recursivo*/
/*O algoritmo recursivo é quando pegamo um problema e dividimos em partes,
 * como no código dividimos em funçoes ou em ifs com situaçoes problemas*/
