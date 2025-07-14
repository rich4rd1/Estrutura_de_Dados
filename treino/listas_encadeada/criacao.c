#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *cria_celula()
{
    celula *le = malloc(sizeof(celula));
    le->prox = NULL;
    return le;
}

void insere(celula *le, int x)
{
    celula *nova = malloc(sizeof(celula));
    nova->prox = le->prox;
    nova->dado = x;
    le->prox = nova;
}

celula *busca(celula *le, int x)
{
    for (celula *ptr = le->prox; ptr != NULL; ptr = ptr->prox)
    {
        if (ptr->dado == x)
            return ptr;
    }
    return NULL;
}

int remov(celula *le)
{
    celula *lixo = le->prox;
    int x = lixo->dado;
    le->prox = lixo->prox;
    free(lixo);
    return x;
}

void destroi(celula *le)
{
    for (celula *ptr = le->prox; ptr != NULL;)
    {
        celula *lixo = le->prox;
        le->prox = lixo->prox;
        free(lixo);
        ptr = le->prox;
    }
    free(le);
}

int tam_lista(celula *le)
{
    int tam = 0;
    for (celula *ptr = le->prox; ptr != NULL; ptr = ptr->prox)
        tam++;
    return tam;
}

int main()
{
    celula *lista = cria_celula();
    insere(lista, 1);
    insere(lista, 2);
    insere(lista, 3);
    insere(lista, 4);
    insere(lista, 5);

    int tam = tam_lista(lista);
    printf("%d\n", tam);
}