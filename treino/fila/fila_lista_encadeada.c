#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

typedef struct fila{
    celula *inicio;
    celula *fim;
}fila;

fila *cria_fila_encadeada(){
    fila *f = malloc(sizeof(fila));
    f->inicio = f->fim = NULL;
    return f;
}

void enfileira(fila *f, int x){
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = NULL;
    
    if(f->fim == NULL){
        f->inicio = f->fim = nova;
    }
    
    f->fim->prox = nova; 
    f->fim = nova;
}

int

desenfileira(fila *f, int *saida){
    celula *temp = f->inicio;
    *saida = temp->dado;
    f->inicio = temp->prox;


    free(temp);
    
    return 1;

}
