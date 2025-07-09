#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le)
{
    celula *p = le->prox;
    if (p == NULL)
    {
        printf("NULL\n");
        return;
    }

    while (p != NULL)
    {
        printf("%d", p->dado);
        p = p->prox;

        if (p != NULL)
            printf(" -> ");
    }
    printf(" -> NULL\n");
}

void imprime_rec(celula *le)
{
    if (le->prox == NULL)
    {
        printf("NULL\n");
        return;
    }

    printf("%d -> ",le->prox->dado);
    imprime_rec(le->prox);
}

