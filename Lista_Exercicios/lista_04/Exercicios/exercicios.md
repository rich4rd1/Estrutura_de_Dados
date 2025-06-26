# Exercícios

## 1 - Lista encadeada - impressão

Considere uma lista encadeada com nó cabeça le definida por células

```
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
```
Sua tarefa nesse exercício é implementar a operação de impressão da lista encadeada encabeçada por le. Para tanto, você deve submeter um arquivo contendo apenas:

Os ```#include``` necessários para execução das instruções utilizadas no seu código.

A definição da struct celula.

Duas funções (uma iterativa e outra recursiva) que imprimem a lista encadeada. Os protótipos devem ser

```
void imprime (celula *le);
void imprime_rec (celula *le);
```

Exemplos
Se a lista estiver vazia, sua função deve imprimir
```
NULL
```

Se não estiver, os elementos devem ser impressos antes do NULL e separados por ->, da seguinte forma: suponha uma lista com os elementos 1, 2 e 3:

```
1 -> 2 -> 3 -> NULL
```
Atenção: Não deve haver espaço depois do NULL.

## 2 - Lista encadeada - busca

Considere uma lista encadeada com nó cabeça le definida por células
``` 
celula {
   int dado;
   struct celula *prox;
} celula;
``` 

Sua tarefa nesse exercício é implementar a operação de busca na lista encadeada encabeçada por le. Para tanto, você deve submeter um arquivo contendo apenas:

Os #include necessários para execução das instruções utilizadas no seu código.

A definição da struct celula.

Uma função que procura pela primeira ocorrência do elemento 
``` 
x
``` 
 na lista encadeada e devolve um ponteiro para a célula que o contém. O protótipo desta função deve ser:
``` 
celula *busca (celula *le, int x);
``` 
Uma função que faz o mesmo que o item 3, mas recursiva, com protótipo
``` 
celula *busca_rec (celula *le, int x);
``` 

## 3 - Listas encadeadas - inserção
Considere uma lista encadeada com nó cabeça le definida por células
```
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
```
Sua tarefa nesse exercício é implementar a operação de inserção na lista encadeada encabeçada por le. Para tanto, você deve submeter um arquivo contendo apenas:

Os #include necessários para execução das instruções utilizadas no seu código.

A definição da struct celula.

Uma função que insere um elemento _x_  no início da lista encadeada, cujo protótipo deve ser:

```
void insere_inicio (celula *le, int x);
```

Uma função que insere um elemento _x_ imediatamente antes da primeira ocorrência de um elemento _y_ na lista encadeada. Se _y_ não estiver na lista encadeada, _x_  deve ser inserido ao final. 

O protótipo dessa função deve ser:
```
void insere_antes (celula *le, int x, int y);
```

## 4 - Listas encadeadas - remoção
Considere uma lista encadeada com nó cabeça le definida por células

```
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
```
Sua tarefa nesse exercício é implementar a operação de remoção da lista encadeada encabeçada por le. Para tanto, você deve submeter um arquivo contendo apenas:

Os ```#include``` necessários para execução das instruções utilizadas no seu código.

A definição da struct celula.

Uma função que remove o elemento imediatamente seguinte do ponteiro p, com protótipo
```
void remove_depois (celula *p);
```
Sua função deve ser capaz de lidar com o(s) caso(s) em que não seja possível remover o elemento seguinte a p.

Uma função que remove a primeira ocorrência de x da lista encadeada, cujo protótipo é

``` void remove_elemento(celula *le, int x);```

Uma função que remove todas as ocorrências de x da lista encadeada, cujo protótipo é 

```void remove_todos_elementos (celula *le, int x);```