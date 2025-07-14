#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x)
{
    for (celula *ptr = le->prox; ptr != NULL; ptr = ptr->prox)
        if (ptr->dado == x)
            return ptr;
    return NULL;
}

celula *busca_rec(celula *le, int x)
{
    if(le == NULL)
        return NULL;
    
    if(le->dado == x)
        return le;
    
    return busca_rec(le->prox, x);
}