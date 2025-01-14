
/*
Escreva uma função que conte o número de células de uma lista encadeada
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
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode -> dado = dado;
    newNode -> prox = NULL;
    return newNode;
}

no *addNode(no *lista, int dado){
    no *novo = (no *)malloc(sizeof(no));
    //corrigindo
    if(novo == NULL){
        printf("Erro ao alocar memoria!\n");
        return lista;
    }

    novo -> dado = dado;
    novo -> prox = NULL;

    if(lista == NULL){
        //lista -> dado = novo -> dado;
        //lista -> prox = novo -> prox = NULL;
        return novo;                 // foi basicamente oq eu fiz, so que da maneira simples
    }
    no *atual = lista; //correção
    
    while (atual ->prox != NULL)
        atual = atual -> prox;      //criou uma variavel pra percorrer a lista e parar quando o prox for null, assim salva qual foi o ultimo

    atual -> prox = novo;           //como já sabemos q atual é o ultimo, agora apontamos do ultimo para o novo q queremos inserir q no caso é o prox
    return lista;
}

void imprimirLista(no* lista){
    no *atual = lista;
    int cont = 0;
    while (atual != NULL)
    {
        cont++;
        printf("[%d] --> ",atual -> dado);
        atual = atual -> prox;
    }
    printf("NULL \n");
    printf("Existem [%d] celulas na lista encadeada \n", cont);
}


