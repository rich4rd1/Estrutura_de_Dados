/*
4 Escreva uma função que troque de posição duas células de uma mesma lista
encadeada.

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node no;
typedef struct head cabeca;

struct node {
    int dado;
    no *prox;
};

struct head {
    no *prox;
    no *ultimo;
    int nums_itens;
};

cabeca *criar_lista() {
    cabeca *le = (cabeca *)malloc(sizeof(cabeca));
    le->prox = NULL;
    le->ultimo = NULL;
    le->nums_itens = 0;
    return le;
}


no *create_node(int dado){
    no *novo = (no *)malloc(sizeof(no));
    novo -> prox = NULL;
    novo -> dado = dado;
    return novo;
}

no *add_node(no *lista, int dado){
    no *novo = create_node(dado);
    if(lista == NULL)
        return novo;
    no *atual = lista;
    while (atual -> prox != NULL)
    {
        atual = atual -> prox;
    }
    atual -> prox = novo;
    return lista;
}

void swap_node(cabeca *lista ,int dado1, int dado2){
    if (dado1 == dado2)
        return;
    no *prev1 = NULL, *prev2 = NULL;
    no *no1 = lista->prox;
    no *no2 = lista->prox;

    while(no1 != NULL && no1 -> dado != dado1){
        prev1 -> prox;
        no1 = no1 ->prox;
    }
    while(no2 != NULL && no2 -> dado != dado1){
        prev2 -> prox;
        no2 = no2 ->prox;
    }

    if (no1 == NULL && no2 == NULL)
        return;
    
    if (prev1 != NULL)
        prev1 -> prox = no2;
    else
        lista ->prox = no2;
    
    if (prev2 != NULL)
        prev2 -> prox = no1;
    else
        lista -> prox = no1;

    no *temp = no1->prox;
    no1 -> prox = no2 ->prox;
    no2 -> prox = temp;
    
    }
