#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct {
    Item *item;
    int primeiro, ultimo;
}Fila;

Fila *criar_fila(int maxN){
    Fila *p = malloc(sizeof(Fila));
    p -> item = malloc(sizeof(10 * sizeof(Item)));
    p -> primeiro = p -> ultimo = 0;
    return p;
}

void enfileirar(Fila *f, int y){
    f ->item[f ->ultimo++] = y;
}

int desenfileirar(Fila *f){
    return f-> item[f -> primeiro++];
}

void imprime_lista_enfileirada(Fila *f){
    printf("Enfileirando:\n");
    for (int i = f ->primeiro; i < f->ultimo; i++)
    {
        printf("F[%d]",i);
        printf("\n");
    }   
}

int main(){
    printf("Enfileirando:\n");
    Fila *fila1 = criar_fila(100);
    for (int i = 0; i < 10; i++)
    {
        enfileirar(fila1,i);
        imprime_lista_enfileirada(fila1);
    }

    printf("Desenfileirando:\n");
    for (int i = 0; i < 3; i++)
    {
        desenfileirar(fila1);
        imprime_lista_enfileirada(fila1);
    }
}