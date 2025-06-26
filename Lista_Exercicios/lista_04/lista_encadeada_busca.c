#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x)
{
    for (celula *p = le->prox; p != NULL; p = p->prox)
    {
        if (p->dado == x)
            return p;
    }
    return NULL;
}

celula *busca_rec(celula *le, int x)
{
    if (le->prox == NULL) // se a cabeça apontar para NULL, retorna pois está vazia
        return NULL;

    if (le->prox->dado == x) // a proxima le->prox->dado == x, retorna esssa celula
        return le->prox;

    return busca_rec(le->prox, x); // senão, retorna a função apontando para o proximo nó
}

