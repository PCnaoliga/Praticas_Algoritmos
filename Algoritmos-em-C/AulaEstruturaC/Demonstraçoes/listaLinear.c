/*
 *
 * Lista Linear:
 * É uma estrutura em que cada elemento é
 * seguido por outro elemento, podendo pos-
 * suir uma ordem de inclusão ou por ordem
 *
 * Lista linear sequencial:
 * Mesma logica da Lista Linear, mas com a
 * ordem já bem definida de forma visual,
 * com a ordem fisica( memoria alocada ) es-
 * teja em posições visinhas, de forma seguida
 *
 * Registro:
 * Informações que o usuario vai querer guardar
 *
 */

#include <stdbool.h>
#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
  // outros registros
} REGISTRO;

typedef struct {
  REGISTRO A[MAX];
  int numElem;
} LISTA;

void inicLista(LISTA *l) { // Funcao para inicializar a lista
  // Se usa um ponteiro para referenciar o REAL ELEMENTO
  l->numElem = 0; // Aqui era um ponto no lugar da seta
}

int tamanho(LISTA *l) {
  return l->numElem; // Retorna o l no numero do ELEMENTO
}

void exibirList(LISTA *l) {
  printf("Lista: \" ");
  // For para mostrar a lista a depender da quantidade de
  // elementos
  for (int i = 0; i < l->numElem; i++) {
    printf("%i", l->A[i].chave);
  }
  printf("\"\n");
}

int buscaSequencial(LISTA *l, TIPOCHAVE ch) {
  int i = 0;
  // Enquanto o i for menor que o numero de elementos o for vai rodar
  while (i < l->numElem) {
    // Caso o ch for igual a A[numeroDoElemento].chave, retorna i
    if (ch == l->A[i].chave) {
      return i;
    } else {
      i++;
    }
  }
  // Se não existir mostra -1
  return -1;
}

bool inserirElementoLista(LISTA *l, REGISTRO reg, int i) {
  int j;

  // If para verificar se e possivel adicionar:
  //  Verifica se o numero de elementos esta no maximo
  //  Se o i é maior que 0
  //  E se o i é um numero de uma posição que exista
  if ((l->numElem == MAX) || (i < 0) || (i < l->numElem)) {
    return false;
  }

  // Esse for serve para adicionar o elemento no loal escolhido
  // Sua logica é afastando os elementos anteriores ao REGISTRO
  // para o elementos anterior ao dele, pegando o elemento A[j]
  // e diminuindo a posição do valor
  for (j = l->numElem; j > i; j--) {
    l->A[j] = l->A[j - 1];
  }

  // Aqui vai ser adicionado o registro e aumentar o numero de elementos
  l->A[i] = reg;
  l->numElem++;

  return true;
}

bool excluirElementoLista(TIPOCHAVE ch, LISTA *l) {
  int pos, j;
  // Vai usar a funcao de busca para achar o elemento que deseja apagar
  pos = buscaSequencial(l, ch);
  // Caso não ache retorne -1
  if (pos == -1) {
    return false;
  }
  // Diferente ao adicioanr o elemento que afasta para tras
  // Aqui em retirar vai avançar os elementos e retirar,
  // para depois diminuir dnv
  for (j = pos; j < l->numElem - 1; j++) {
    l->A[j] = l->A[j + 1];
  }
  // Aqui vai diminuir o numero de elementos por ter sido retirado 1
  l->numElem--;
  return true;
}

void reinicializarElem(LISTA *l) { l->numElem = 0; }

int main() { return 0; }
