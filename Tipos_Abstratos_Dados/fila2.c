#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct
{
    Item *item;
    int primeiro, ultimo;
} Fila;


int lista_vazia(Fila *f){
    return f->primeiro == f->ultimo;
}

Fila *criar_fila(int maxN)
{
    Fila *p = malloc(sizeof(Fila));
    p->item = malloc(maxN * sizeof(Item));
    p->primeiro = p->ultimo = 0;
    return p;
}

int desenfileirar(Fila *f)
{
    return f->item[f->primeiro++];
}

void enfileirar(Fila *f, int y)
{
    f->item[f->ultimo++] = y;
}

void imprime_fila(Fila *f)
{
    printf("\np = [%d] , u = [%d]\n\n", f->primeiro, f->ultimo);
    for (int i = f->primeiro; i < f->ultimo; i++)
    {
        printf("Fila: [%d]", i);
        printf("\n");
    }
}

int main()
{
    Fila *fila1 = criar_fila(100);
    lista_vazia(fila1);
    printf("Enfileirando a nossa fila");
    for (int i = fila1->primeiro; i < 5; i++)
    {
        enfileirar(fila1, i);
        imprime_fila(fila1);
    }

    printf("Desenfileirando nossa fila");
        /*definimos aqui visualmente quantos queremos desenfileirar
        pois, os valores ainda continuam no array, o desenfileiramento que ocorre aqui
        apenas ocorrendentro deste loop
        */
        for (int i = fila1->primeiro; i < 3; i++)
    {
        desenfileirar(fila1);
        imprime_fila(fila1);
    }
}
