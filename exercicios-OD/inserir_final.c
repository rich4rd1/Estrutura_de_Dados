// Incluir um elemento no final de uma lista.

#include <stdio.h>
#include <stdlib.h>

typedef struct node no;
typedef struct head cabeca;

struct node
{
    no *prox;
    int dado;
};

struct head
{
    no *prox;
    no *ultimo;
    int quant_elems;
};

cabeca *create_lista()
{
    cabeca *le = (cabeca *)malloc(sizeof(cabeca));
    le->prox = NULL;
    le->ultimo = NULL;
    le->quant_elems = 0;
    return le;
}

no *create_node(int dado)
{
    no *novo = (no *)malloc(sizeof(no));
    novo->dado = dado;
    novo->prox = NULL;
    return novo;
}

void add_node(cabeca *lista, int dado)
{
    no *novo = create_node(dado);

    if (lista->prox == NULL)
    {
        lista->prox = novo;
        lista->ultimo = novo;
    }else{
        lista -> ultimo -> prox = novo;
        lista -> ultimo = novo; 
    }
    lista ->quant_elems++;

}

void imprimir_lista(no *lista)
{
    no *lista_aux = lista;
    while (lista_aux != NULL)
    {
        printf("[%d] --> ", lista_aux->dado);
        lista_aux = lista_aux->prox;
    }
    printf("NULL\n");
}

int main()
{
    int quant, n;
    cabeca *lista = create_lista();

    printf("quantos elementos tem a lista:");
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++)
    {
        printf("escreve o numero %d:", i + 1);
        scanf("%d", &n);
        add_node(lista, n);
    }
    printf("lista atual: ");
    imprimir_lista(lista->prox);
    return 0;
}
