#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct lista *prox;
} celula;

void imprime(celula *le)
{
    if (le->prox != NULL)
    {
        printf("%d -->", le->dado);
        return imprime(le->prox);
    }
    return NULL;
}

/*
Exercícios 2
a. Escreva uma função que conte o número de células de uma lista encadeada. Faça duas versões: uma iterativa e uma recursiva.

b. Altura.  A altura de uma célula c em uma lista encadeada é a distância entre c e o fim da lista. Mais exatamente, a altura de c é o número de passos do caminho que leva de c até a última célula da lista.  Escreva uma função que calcule a altura de uma dada célula.

c. Profundidade.  A profundidade de uma célula c em uma lista encadeada é o número de passos do único caminho que vai da primeira célula da lista até c.  Escreva uma função que calcule a profundidade de uma dada célula.
*/

// exercicio 2

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int qtd_celulas(celula *le)
{
    int qtd = 0;

    if (le->prox == NULL)
        return qtd;

    if (le->prox != NULL)
    {
        qtd++;
        return qtd_celulas(le->prox);
    }
}

int qtd_celulas_iterativo(celula *le)
{
    celula *p;
    int qtd = 0;
    for (p = le; p->prox != NULL; p = p->prox)
    {
        qtd++;
    }
    return qtd;
}

int altura(celula *c)
{
    if (c->prox == NULL)
        return 0;
    return 1 + altura(c->prox);
}

int profundidade(celula *le, celula *c)
{
    if (le->prox != c)
        return 1 + profundidade(le->prox, c);
    else
        return 0;
}

/*
d.Escreva uma função que verifique se uma lista encadeada que contém números inteiros está em ordem crescente.
e.Escreva uma função que faça uma busca em uma lista encadeada crescente. Faça versões recursiva e iterativa.
f.Escreva uma função que encontre uma célula com conteúdo mínimo. Faça duas versões: uma iterativa e uma recursiva.
g.Escreva uma função que verifique se duas listas encadeadas são iguais, ou melhor, se têm o mesmo conteúdo. Faça duas versões: uma iterativa e uma recursiva.
h.Ponto médio.  Escreva uma função que receba uma lista encadeada e devolva o endereço de uma célula que esteja o mais próximo possível do meio da lista. Faça isso sem contar explicitamente o número de células da lista
*/

int verifica_lista_crescente(celula *le)
{
    if(le->prox == NULL || le->prox->prox == NULL)
        return 0;

    if (le->prox->dado > le->prox->prox->dado)
        return 0;

    return verifica_lista_crescente(le->prox);
}