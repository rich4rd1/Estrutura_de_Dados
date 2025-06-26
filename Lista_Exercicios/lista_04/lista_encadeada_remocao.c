#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

// Uma função que remove o elemento imediatamente seguinte do ponteiro p, com protótipo
void remove_depois(celula *p)
{
    if (p->prox == NULL)
        return;

    celula *removido = p->prox;
    p->prox = removido->prox;
    free(removido);
}

// Uma função que remove a primeira ocorrência de x da lista encadeada, cujo protótipo é

void remove_elemento(celula *le, int x)
{

    celula *ptr = le;
    celula *temp = le->prox;

    while (temp != NULL && temp->dado != x)
    {
        ptr = temp;
        temp = temp->prox;
    }

    if (temp == NULL)
        return;

    ptr->prox = temp->prox;
    free(temp);
}

// Uma função que remove todas as ocorrências de x da lista encadeada, cujo protótipo é

void remove_todos_elementos (celula *le, int x){
    
}