#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct
{
    Item *item;
    int primeiro, ultimo;
} Fila;

Fila *criar_fila(int MaxN)
{
    Fila *p = malloc(sizeof(Fila));
    p->item = malloc(MaxN * sizeof(Item));
    p->primeiro = p->ultimo = 0;
    return p;
}

int vazia(Fila *f)
{
    return f->primeiro == f->ultimo;
}

void enfileira(Fila *f, int y)
{
    f->item[f->ultimo++] = y;
}

int desenfileira(Fila *f)
{
    return f->item[f-> primeiro++];
}

void imprime(Fila *f){
    printf("\np = %d, u = %d\n\n", f->primeiro, f->ultimo);
    printf("F:");
    for (int i = f->primeiro; i < f->ultimo; i++)
    {
    printf("[%d]", i);
    }    
    printf("\n");
}

int main(){
    Fila *fila1 = criar_fila(100);
    for (int i = 0; i < 10; i++)
    {
        enfileira(fila1,i);
        imprime(fila1);
    }

    for (int i = 0; i < 5; i++)
    {
        desenfileira(fila1);
        imprime(fila1);
    }
       
}