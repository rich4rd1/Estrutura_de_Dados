#include <stdio.h>
#include <stdlib.h>

#define N 100
int p, u;
int fila[N];

// cria fila
int cria_fila(int tamanho)
{
    p = u = 0;
}

// enfileira
void enfileira(int x)
{
    fila[u++] = x;
}

// desenfileira
int desenfileira(int *fila, int *inicio, int *fim)
{
    int y = fila[0];
    for (int i = 0; i <= *fim - 1; i++)
    {
        fila[i] = fila[i+1];
    }
    (*fim)--;
    return y;
}

// fila vazia
int fila_vazia()
{
    return p >= u;
}

// fila cheia
int fila_cheia()
{
    if (u >= N)
    return 1;
}

int main()
{
    cria_fila(10);
    enfileira(1);
    enfileira(2);
    enfileira(3);
    enfileira(4);
    enfileira(5);

    for (int i = 0; i < u; i++)
    {
        printf("[%d]", fila[i]);
    }
    printf("\n");
    printf("[%d]\n",desenfileira(fila,&p,&u));
        for (int i = 0; i < u; i++)
    {
        printf("[%d]", fila[i]);
    }
    printf("\n");
}