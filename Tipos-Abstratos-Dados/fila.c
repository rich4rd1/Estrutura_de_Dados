#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct
{
    Item *item; //estou fornecendo o endereço pq quero criar meio que um vetor 
    int primeiro, ultimo;
} Fila;

Fila *criar(int maxN) /* A função é de ponteiro pq eu persito essa função na 
memoria heap assim eu aloco espaço na memoria pra usar ela sempre que eu precisar*/
{
    // alocando espaço para criar o array
    Fila *p = malloc(sizeof(Fila)); 
    // criando o array a partir da alocação
    // logo o meu vetor é item[], pq to armazendo espaço na memomoria para um tipo item
    // entt meio que funciona como um vetor de item mesmo sem ter a cara convencional de vetor
    p->item = malloc(maxN * sizeof(Item));
    p->primeiro = p->ultimo = 0;
    return p;
}

int vazia(Fila *f)
{
    return f->primeiro == f->ultimo;
}

int desenfileira(Fila *f)
{
    return f->item[f->primeiro++];
}

void enfileira(Fila *f, int y)
{
    f->item[f->ultimo++] = y;
}

void imprime(Fila *f)
{
    printf("\nFila p=%d e u=%d\n", f->primeiro, f->ultimo);
    for (int i = f->primeiro; i < f->ultimo; i++)
    {
        printf("F[%d]", i);
        printf("\n");
    }
}

int main()
{
    Fila *fila1 = criar(100);
    printf("\n\nCriando a fila e enfileirando 10 elementos \n");
    for (int i = 0; i < 10; i++)
    {
        enfileira(fila1, i);
        imprime(fila1);
    }
    printf("\n\nDesenfileirando os 3 primeiros elementos \n");
    for (int i = fila1->primeiro; i < 3; i++) // desenfileira os 3 primeiros
    {
        desenfileira(fila1);
        imprime(fila1);
    }
}
