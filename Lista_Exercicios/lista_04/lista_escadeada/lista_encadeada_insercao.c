#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x)
{
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void insere_antes(celula *le, int x, int y)
{

    celula *novo_x = malloc(sizeof(celula));   

    novo_x->dado = x;

    celula *antes = le;
    celula *depois = le->prox;

    while(depois != NULL && depois->dado != y){
        antes = depois;
        depois = depois -> prox;
    }
    
    antes ->prox = novo_x;
    novo_x->prox = depois;
}