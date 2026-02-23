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
  // 1. Definimos um vetor de teste
  int tamanho;

  printf("Fale o tamanho do vetor para identificarmos o maior numero\n");
  scanf("%d", &tamanho);

  int meuVetor[tamanho];

  for (int i = tamanho; i >= 0; i--) {
    printf("Fale o numero %d:\n", i);
    scanf("%d", &meuVetor[i]);
  }

  // 2. Chamamos a função e guardamos o resultado
  int resultado = MaximoR(meuVetor, tamanho);

  // 3. Mostramos o resultado (precisamos do printf da stdio.h)
  printf("O maior elemento do vetor e: %d\n", resultado);

  return 0;
}
