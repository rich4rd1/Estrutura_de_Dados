#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int comeco;
    int fim;
    int N;
} fila;

fila *cria_fila(int N)
{ // N é o tamanho da fila
    fila *f = malloc(sizeof(fila));
    f->dados = malloc(N * sizeof(int));
    f->comeco = f->fim = 0;
    f->N = N;
    return f;
}

// efileira
int enfileira(fila *f, int x)
{
    if (f->fim + 1 % f->N == f->comeco)
        return 1;
    f->dados[f->fim] = x;
    f->fim++;
    return 0;
}

// desenfileira
int desenfileira(fila *f, int *y)
{
    if (f->fim == f->comeco)
        return 1;

    *y = f->dados[f->comeco];
    f->comeco++;
     return 0;
}

int main()
{
    fila *f = cria_fila(10); // cria fila com 10 lugares
}