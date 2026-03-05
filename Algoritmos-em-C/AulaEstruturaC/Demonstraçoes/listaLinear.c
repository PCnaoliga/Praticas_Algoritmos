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
  REGISTRO A[MAX + 1];
  int numElem;
} LISTA;

/*
 * Gerenciamento de listas por meio de funções:
 */

void inicLista(LISTA *l) { // Funcao para inicializar a lista
  // Se usa um ponteiro para referenciar o REAL ELEMENTO
  l->numElem = 0; // Aqui era um ponto no lugar da seta
}

int tamanho(LISTA *l) { // Verificar o tamanho da lista
  return l->numElem;    // Retorna o l no numero do ELEMENTO
}

void exibirList(LISTA *l) { // Exibir a lista por inteiro
  printf("Lista: \" ");
  // For para mostrar a lista a depender da quantidade de
  // elementos
  for (int i = 0; i < l->numElem; i++) {
    printf("%i", l->A[i].chave);
  }
  printf("\"\n");
}

// Essa busca usa o conceito de sentinela,
// Um espaço onde vai ser armazenado o valor
// escolhido para a busca, dessa forma se o
// valor for só achado no sentinela vai cons-
// tar como se não existise.
int buscaSentinela(LISTA *l, TIPOCHAVE ch) {
  int i = 0;
  // Adiciona o valor da chave no sentinela
  // que é o espaço mais a frente no numElem
  l->A[l->numElem].chave = ch;
  // Vai verificar a estrutura
  while (l->A[i].chave != ch) {
    i++;
  }
  // Caso o i passar por toda a estrutura
  // e for para o sentinela vai retornar um
  // valor de erro = -1
  if (i == l->numElem) {
    return -1;
  }
  return i;
}

int buscaSequencial(LISTA *l, TIPOCHAVE ch) { // Busca um elemento descrito
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

bool inserirElementoListaOrd(LISTA *l, REGISTRO reg) {}

// Adicionar um elemento na lista
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

// Excluir um elemento da lista
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

// Reiniciar os elementos da lista deixando todos como 0
void reinicializarElem(LISTA *l) { l->numElem = 0; }

int main() { return 0; }
