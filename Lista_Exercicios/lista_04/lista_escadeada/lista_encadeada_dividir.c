#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula *l, celula *l1, celula *l2)
{
    celula *ptr = l->prox;
    celula *cauda_l1 = l1;
    celula *cauda_l2 = l2;

    while (ptr != NULL)
    {
        celula *temp = ptr->prox;
        if (ptr->dado % 2 == 0)
        {
            cauda_l2->prox = ptr;
            cauda_l2 = ptr;
            cauda_l2->prox = NULL;
        }
        else
        {
            cauda_l1->prox = ptr;
            cauda_l1 = ptr;
            cauda_l1->prox = NULL;
        }
        ptr = temp;
    }
    l->prox = NULL;
}