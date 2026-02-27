#include <stdio.h>
#include <stdlib.h>

typedef struct aux {
  int cpf;
  int idade;
  struct aux *conjude; // Essa estrutura vai referenciar outra esturura pessoa
} PESSOA;

void imprimirCPFs(PESSOA p) {
  if (p.conjude != NULL) {
    printf("CPFs: %i x %i\n", p.cpf, p.conjude->cpf);
  }
}

void envelhercer1(PESSOA p) {
  p.idade++;
} // Aqui vai adicionar idade apenas na copia

void envelhercer2(PESSOA *p) {
  p->idade++;
} // Aqui vai adicionar no endereco da pessoa1

void envelhercer3(PESSOA p) {
  p.conjude->idade++;
} // Aqui vai usar a copia para encontrar o conjude

void envelhercer4(PESSOA *p) {
  p->conjude->idade++;
} // Aqiu vai usar o endereco para achar o conjude

int main() {
  PESSOA pessoa1;
  PESSOA pessoa2;
  PESSOA solteira;

  pessoa1.cpf = 02235353402;
  pessoa1.idade = 24;

  pessoa2.cpf = 304582328;
  pessoa2.idade = 20;

  solteira.cpf = 034234243;
  solteira.idade = 80;

  pessoa1.conjude = &pessoa2;
  pessoa2.conjude = &pessoa1;
  solteira.conjude = NULL;

  imprimirCPFs(pessoa1);
  imprimirCPFs(pessoa2);
  imprimirCPFs(solteira);

  printf("Idade P1: %i\n", pessoa1.idade);
  printf("Idade P2: %i\n", pessoa2.idade);

  envelhercer1(pessoa1);
  printf("Idade P1 depois de adicionar a copia: %i\n", pessoa1.idade);

  envelhercer2(&pessoa1);
  printf("Idade P1 depois de adicionar no endereco: %i\n", pessoa1.idade);

  envelhercer3(pessoa1);
  printf("Idade P1 depois de usar a copia para adicionar no conjude: %i\n",
         pessoa2.idade);

  envelhercer4(&pessoa1);
  printf("Idade P1 depois de usar o endereco para adicionar no conjude: %i\n",
         pessoa2.idade);
}
