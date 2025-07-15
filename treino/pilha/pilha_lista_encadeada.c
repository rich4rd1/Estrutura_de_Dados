#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

celula *pi;

void cria_pilha(){
    pi = malloc(sizeof(celula));
    pi->prox = NULL;
}

void empilha(int x){
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = pi->prox;
    pi->prox = nova;
}

int desempilha(){
    celula *tmp = pi->prox;
    int x = tmp->dado;
    pi->prox = tmp->prox;
    free(tmp);
    return x;
}