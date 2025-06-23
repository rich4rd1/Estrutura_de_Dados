#include <stdio.h>
#include <stdlib.h>

// criar uma fila e uma função para aumentar o tamanho dela

int N = 10;
int primeiro, ultimo;
int *fila;

void criar_fila()
{
    primeiro = ultimo = 0;
    fila = malloc(N * sizeof(int));
}

int fila_vazia()
{
    return primeiro == ultimo;
}

void realoca(void)
{
    N *= 10;
    fila = realloc(fila, N * sizeof(int));
}

void fila_cheia()
{
    if (ultimo == N)
    {
        printf("\nFILA REALOCADA!\n");
        realoca();
    }
}

int desenfileirar()
{
    return fila[primeiro++];
}
void enfileirar(int y)
{
    fila[ultimo++] = y;
}

void imprime_fila()
{
    printf("\nPRIMEIRO = %d,  ULTIMO = %d \n", primeiro, ultimo);
    for (int i = primeiro; i < ultimo; i++)
    {
        printf("[%d]", fila[i]);
    }
    printf("\n");
}

int main()
{
    criar_fila();
    fila_cheia();
    for (int i = 0; i < 19; i++)
    {
        enfileirar(i);
        fila_cheia();
        imprime_fila();
    }
    
}