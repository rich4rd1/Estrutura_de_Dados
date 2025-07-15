#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
    int N;
    int p;
    int u;
    int *dados;
}fila;

//cria 
fila *cria_fila(int N){
    fila *f = malloc(sizeof(fila));
    f->dados = malloc(N * sizeof(int));
    f->N = N;
    f->p = f->u = 0;
    return f;
}

//vazia (u == p)
int esta_vazia(fila *f){
    if(f->u == f->p)
        return 1;
    else    
        return -1;
}

//cheia (u == N-1)
int esta_cheia(fila *f){
    if(f->u == f->N)
        return 1; 
    else    
        return -1;
}

//insere
int enfileira(fila *f, int x){
    if(esta_cheia((f)))
        return -1;
    
    else{
        f->dados[f->u++] = x;
    }
    return 1;
}

//remove
int desenfileira(fila *f){
    int x = f->dados[f->p++];
    return x;
}


int main(){
    fila *nova_fila = cria_fila(10);
    enfileira(nova_fila, 10);
    enfileira(nova_fila, 20);
    enfileira(nova_fila, 30);
    enfileira(nova_fila, 40);
    

}