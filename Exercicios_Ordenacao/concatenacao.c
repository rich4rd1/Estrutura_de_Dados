/*
2 Escreva uma função que concatene duas listas encadeadas.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node no;

struct node
{
    int dado;
    no *prox;
};

no *createNode(int dado){
    no *newNode = (no *)malloc(sizeof(no));
    if (newNode == NULL)
    {
        printf("Memory allocation failed \n");
        exit(1);
    }
    newNode -> dado = dado;
    newNode -> prox = NULL;
    return newNode;
}

no *addNode(no *lista, int dado){
    no *novo = (no *)malloc(sizeof(no));
    if(novo == NULL){
        printf("Memory allocation failed \n");
        exit(1);
    }
    novo -> dado = dado;
    novo -> prox = NULL;

    if (lista == NULL)
        return novo;
    
    no *atual = lista;
    while(atual ->prox != NULL){
        atual = atual -> prox;
    }
    atual -> prox = novo;
    return lista;    
}

no *concatenaLista(no *lista1, no *lista2){
    if(lista1 == NULL)
        return lista2;

    no *atual = lista1;
    while (atual -> prox != NULL)
        atual = atual -> prox;
    atual -> prox = lista2;
    return lista1;
}

void imprimirLista(no* lista){
    no *atual = lista;
    int cont = 0;
    while (atual != NULL)
    {
        cont++;
        printf("[%d] --> ", atual -> dado);
        atual = atual -> prox;
    }
    printf("NULL \n");
    printf("Existem [%d] celulas na lista encadeada \n", cont);
}


int main(){
    no *lista = NULL;
    no *lista2 = NULL;
    lista = addNode(lista, 1);
    lista = addNode(lista, 2);
    lista = addNode(lista, 3);
    lista2 = addNode(lista, 4);
    lista2 = addNode(lista, 5);
    lista2 = addNode(lista, 6);
    imprimirLista(lista);
}