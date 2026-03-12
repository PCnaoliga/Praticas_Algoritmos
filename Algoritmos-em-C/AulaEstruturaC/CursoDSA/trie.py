class TrieNode:  # Cada trie vai ter esses objetos
    def __init__(self):
        self.children = {}  # Objeto para ser o comparador das palavras
        self.is_end_of_word = False  # É um objeto que vai identificar o fim da palavra


class Trie:
    def __init__(self):
        # Identificador do primeiro nodo/primeiro objeto da árvore
        self.root = TrieNode()

    def insert(self, word):
        """O insert vai começar a partir do primeiro nodo (self.root)"""
        current_node = self.root

        for char in word:  # Loop para ver se a letra está contida em "children"
            if char not in current_node.children:
                # Caso não exista a letra, vai se criar outro node
                current_node.children[char] = TrieNode()

            current_node = current_node.children[char]

        # Se tiver terminado, marca que o nodo é o fim da palavra
        current_node.is_end_of_word = True

    def search(self, word):
        """Vai verificar se a palavra está na trie"""
        current_node = self.root

        for char in word:
            if char not in current_node.children:
                return False

            current_node = current_node.children[char]

        # No final tem que ver se realmente é uma palavra ou apenas um prefixo
        return current_node.is_end_of_word

    def starts_with(self, prefix):
        # Essa função vai verificar se existe uma palavra com as letras passadas
        current_node = self.root

        for char in prefix:
            if char not in current_node.children:
                return False
            current_node = current_node.children[char]

        return True


# --- Teste de Execução ---
trie = Trie()
trie.insert("apple")
trie.insert("banana")
trie.insert("app")
trie.insert("orange")

print("A palavra BANANA na arvore:")
print(trie.search("banana"))

print("A palavra CARAMBA")
print(trie.search("caramba"))

print("O prefixo AP existe?")
print(trie.starts_with("ap"))

print("O prefixo AD existe?")
print(trie.starts_with("ad"))
