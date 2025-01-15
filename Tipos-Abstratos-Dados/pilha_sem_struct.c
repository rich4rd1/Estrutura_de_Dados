#include <stdio.h>
#include <stdlib.h>

int *pilha;
int topo;

void criar(int N)
{
    pilha = malloc(N * sizeof(int));
    topo = 0;
}

void empilhar(int y)
{
    pilha[topo++] = y;
}

int desempilhar()
{
    return pilha[--topo];
}

int vazia()
{
    return topo == 0;
}

int espiar()
{
    return pilha[topo - 1];
}

void imprime()
{
    printf("\nTopo: %d\n", topo);
    for (int i = 0; i < topo; i++)
    {
        printf("\n");
        printf("| %d |", pilha[i]);
    }
    printf("\n");
}

int main()
{
    criar(10);

    for (int i = 0; i < 10; i++)
    {
        empilhar(i);
        imprime();
    }

    printf("\nDesempilhando:\n");
    for (int i = 0; i < 10; i++)
    {
        desempilhar();
        imprime();
    }
}