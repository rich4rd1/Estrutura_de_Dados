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

## 5 - Mesclar listas encadeadas
Considere uma lista encadeada com nó cabeça le definida por células
```
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
Faça uma função
```
```
void mescla_listas (celula *l1, celula *l2, celula *l3);
```
que recebe duas listas encadeadas, encabeçadas por l1 e l2, cujo conteúdo está ordenado em ordem não decrescente, e gere uma nova lista encabeçada por l3 que contém os elementos de l1 e l2 ordenados.

Observações

Você não deve alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de l1 e l2 para que estejam em l3.

Você deve considerar que o nó cabeça l3 já foi alocado antes da chamada para a função mescla_listas.

As listas encabeçadas por l1 e l2 não precisam estar intactas após a chamada à sua função.


**Exemplos**
Suponha, por exemplo, que a lista l1 seja
```
l1 -> 1 -> 7 -> 9 -> 10 -> NULL
```
e a lista l2 seja
```
l2 -> 2 -> 3 -> 8 -> NULL
```
Sua função deve montar a lista l3 da seguinte forma
```
l3 -> 1 -> 2 -> 3 -> 7 -> 8 -> 9 -> 10 -> NULL
```

## 6 - Dividir listas encadeadas
Considere uma lista encadeada com nó cabeça le definida por células

```
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
Faça uma função
```
```
void divide_lista (celula *l, celula *l1, celula *l2);
```
que recebe uma lista encadeada encabeçada por l e a divide em duas listas l1 e l2 de forma que l1 contenha todos os numeros ímpares de l (na ordem em que aparecem em l) e l2 todos os números pares de l (na ordem em que aparecem em l).

**Observações**

Você não deve alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de l para que estejam em l1 ou l2.

Você deve considerar que os nós cabeça l1 e l2 já foram alocados antes da chamada para a função divide_lista.

Como consequência, a lista encabeçada por l não estará intacta após a chamada à sua função.

**Exemplo**

Suponha, por exemplo, que a lista l seja
```
l -> 10 -> 4 -> -9 -> 2 -> 7 -> 10 -> NULL
```
Sua função deve devolver as listas
```
l1 -> -9 -> 7 -> NULL
```
e
```
l2 -> 10 -> 4 -> 2 -> 10 -> NULL
```