# Árvore Binária de Busca em C

Implementação de uma **Árvore Binária de Busca (BST)** em C puro, utilizando alocação dinâmica de memória com `malloc` e `free`.

---

## Estrutura do projeto

```
Fundamentos em C/
└── Arvore binaria/
    └── parvore_b.c
```

---

## Conceitos aplicados

### Alocação dinâmica
| Função | Uso neste código |
|--------|-----------------|
| `malloc` | Aloca memória para cada novo nó sem inicializar |
| `free` | Libera toda a memória alocada ao final da execução |

> `calloc` e `realloc` não são usados intencionalmente — o objetivo é trabalhar com `malloc` e ponteiros de forma explícita.

### Ponteiros
Cada nó da árvore contém dois ponteiros `struct No*` — um para o filho esquerdo e um para o direito. Parâmetros de valor são passados como `const int*` (passagem por referência).

---

## Funções implementadas

### `criar_no(const int* valor)`
Aloca um novo nó na memória, armazena o valor e inicializa os ponteiros filhos como `NULL`. Retorna `NULL` se a alocação falhar.

### `inserir(struct No* raiz, const int* valor)`
Insere um valor na árvore seguindo a regra da BST: valores menores vão para a esquerda, maiores para a direita. Valores duplicados são ignorados.

### `buscar(struct No* raiz, const int* key)`
Busca um valor na árvore. Retorna `1` se encontrado, `0` caso contrário. Segue a mesma lógica da inserção para navegar pela árvore.

### `emOrdem(struct No* raiz)`
Percorre a árvore em ordem simétrica (esquerda → raiz → direita). Produz os valores em ordem crescente.

### `preOrdem(struct No* raiz)`
Percorre a árvore em pré-ordem (raiz → esquerda → direita).

### `liberar(struct No* raiz)`
Libera toda a memória alocada usando percurso pós-ordem (esquerda → direita → raiz). Deve sempre ser chamada ao final do programa para evitar vazamento de memória.

---

## Exemplo de saída

Com os valores `{50, 20, 80, 40, 12, 13, 11}` inseridos nessa ordem:

```
Em ordem
-11- -12- -13- -20- -40- -50- -80-

Pre ordem
-50- -20- -12- -11- -13- -40- -80-

Buscar chave 12: Encontrado
```

A travessia em ordem sempre retorna os valores em ordem crescente — essa é a propriedade fundamental de uma BST.

---

## Como compilar e executar

```bash
gcc -o arvore "Arvore binaria/parvore_b.c"
./arvore
```

---

## Observações sobre memória

A função `liberar()` é a mais crítica do programa. Esquecer de chamá-la causa **vazamento de memória** — o espaço alocado com `malloc` não é devolvido ao sistema operacional até o processo encerrar. Em sistemas de longa execução isso se acumula e pode esgotar a memória disponível.