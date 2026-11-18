# Práticas de Algoritmos

Repositório de estudos e prática de **algoritmos, lógica de programação e estruturas de dados**, com exercícios em **C** e **Python**. Reúne demonstrações de aulas, exercícios organizados por capítulos e anotações de estudo.

O objetivo é consolidar os fundamentos da programação por meio da implementação de algoritmos, da exploração de estruturas de dados e da análise das soluções.

## Conteúdos

### Algoritmos e estruturas em C

- Ponteiros, endereços de memória e alocação dinâmica.
- Estruturas (`struct`) e passagem de parâmetros por valor e por ponteiro.
- Vetores e busca sequencial.
- Listas lineares sequenciais e busca com sentinela.
- Recursão e identificação de valores máximos e mínimos.
- Exercícios envolvendo soma de dígitos, logaritmos e máximo divisor comum.

### Estruturas de dados em Python

- Filas com `queue.Queue`.
- Árvore de prefixos (**trie**), com inserção, busca de palavras e consulta de prefixos.

### Anotações de estudo

O arquivo [CursoDSA/anot.txt](CursoDSA/anot.txt) reúne anotações sobre complexidade temporal e espacial, notação Big O, listas encadeadas, filas, hashmaps, grafos, tries, árvores B e resolução de problemas.

## Organização do repositório

| Caminho | Conteúdo |
| --- | --- |
| [Algoritmos-em-C/AulaEstruturaC/](Algoritmos-em-C/AulaEstruturaC/) | Demonstrações de aulas sobre ponteiros, estruturas, vetores e listas lineares. |
| [Algoritmos-em-C/LivroEstruturaC/Demonstrações/](Algoritmos-em-C/LivroEstruturaC/Demonstrações/) | Exemplos organizados por capítulos sobre recursão e vetores. |
| [Algoritmos-em-C/LivroEstruturaC/Exercicios/](Algoritmos-em-C/LivroEstruturaC/Exercicios/) | Exercícios dos capítulos de algoritmos recursivos e vetores. |
| [CursoDSA/](CursoDSA/) | Exemplos em Python e anotações de estruturas de dados e algoritmos (DSA). |
| [Teste.c](Teste.c) | Programa inicial em C que exibe uma mensagem no terminal. |

## Como executar

Os exemplos são programas independentes. Escolha o arquivo que deseja estudar e execute-o individualmente.

### Pré-requisitos

- **Git**, para clonar o repositório.
- **GCC**, para compilar os exemplos em C.
- **Python 3**, para executar os exemplos em Python.

Os exemplos atuais em Python utilizam apenas a biblioteca padrão, sem necessidade de instalar pacotes adicionais. Os comandos abaixo consideram um terminal Linux com Bash.

### Clonar o projeto

```bash
git clone https://github.com/PCnaoliga/Praticas_Algoritmos.git
cd Praticas_Algoritmos
```

### Executar um programa em C

Na raiz do projeto, compile o programa inicial e execute o binário gerado:

```bash
gcc -std=c11 -Wall -Wextra Teste.c -o /tmp/praticas-teste
/tmp/praticas-teste
```

Para executar a demonstração de busca em vetor:

```bash
gcc -std=c11 -Wall -Wextra \
  "Algoritmos-em-C/LivroEstruturaC/Demonstrações/Cap-3:D_Vetores/BuscaVetor.c" \
  -o /tmp/praticas-busca-vetor
/tmp/praticas-busca-vetor
```

Esse exemplo procura o valor `5` no vetor e imprime `4`, seu índice, pois a contagem das posições começa em zero.

Nos exercícios que utilizam funções de `<math.h>`, como `log2` e `round`, acrescente `-lm` ao final do comando de compilação:

```bash
gcc -std=c11 -Wall -Wextra \
  "Algoritmos-em-C/LivroEstruturaC/Exercicios/Cap-2:E_AlgRecursivos/calcularLog.c" \
  -o /tmp/praticas-log -lm
/tmp/praticas-log
```

Nesse exercício, informe um número inteiro positivo quando o programa aguardar a entrada. As aspas nos caminhos preservam os nomes das pastas, incluindo acentos e caracteres especiais.

### Executar os exemplos em Python

Na raiz do projeto:

```bash
python3 CursoDSA/queues.py
python3 CursoDSA/trie.py
```

O exemplo de fila imprime `1`, `2` e `3`, nessa ordem, demonstrando o comportamento **FIFO**: o primeiro elemento a entrar é o primeiro a sair. O exemplo de trie demonstra buscas de palavras e prefixos, exibindo resultados booleanos (`True` e `False`).

## Como estudar com este repositório

1. Escolha um tema e leia o código e seus comentários.
2. Compile ou execute o exemplo correspondente.
3. Altere os valores de entrada e observe o resultado.
4. Compare abordagens iterativas e recursivas quando disponíveis.
5. Registre dúvidas, possíveis melhorias e observações sobre complexidade.

## Estado dos estudos

O repositório está em evolução. Alguns exercícios contêm implementações parciais, trechos experimentais ou pontos a revisar, como o exercício de Fibonacci e a inserção ordenada na lista linear. As anotações também fazem parte desse processo de aprendizado.

Os comandos de execução acima servem como ponto de partida para explorar os exemplos; cada exercício deve ser analisado individualmente quanto à lógica, aos limites de entrada e ao uso de memória.
