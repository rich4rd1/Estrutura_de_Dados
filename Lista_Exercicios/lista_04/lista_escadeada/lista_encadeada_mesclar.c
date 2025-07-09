#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;


void mescla_listas(celula *l1, celula *l2, celula *l3)
{

    celula *ptr1 = l1->prox;
    celula *ptr2 = l2->prox;
    celula *cauda_l3 = l3;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->dado <= ptr2->dado)
        {
            cauda_l3->prox = ptr1;
            ptr1 = ptr1->prox;
        }
        else
        {
            cauda_l3->prox = ptr2;
            ptr2 = ptr2->prox;
        }
        cauda_l3 = cauda_l3->prox;
    }
    if (ptr1 != NULL)
        cauda_l3->prox = ptr1;
    else
        cauda_l3->prox = ptr2;

    l1->prox = NULL;
    l2->prox = NULL;
}

