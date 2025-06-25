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