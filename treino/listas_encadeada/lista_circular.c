#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

celula *cria_lista_circular(){
    celula *nova = malloc(sizeof(celula));
    nova ->prox = nova;
    return nova;
}

void insere_circularmente(celula *le, int x){
    celula *nova_celula = malloc(sizeof(celula));
    nova_celula ->dado = x;

    if(le ->prox == le){
        nova_celula->prox = le;
        le->prox = nova_celula;
    }
    else{
        celula *p = le->prox;
        while(p ->prox != le){
            p = p->prox;
        }
        p->prox = nova_celula;
        nova_celula->prox = le;
        
    }
}

void imprime_lista(celula *le){
    if(le->prox == le)
        return;
    
    celula *p = le->prox;
    celula *inicio = p;

    while(1){
        printf("[%d]--> ",p->dado);
        p = p->prox;
        if(p == inicio)
            break;
    }
    printf("\n");
}

int main(){
    celula *lista = cria_lista_circular();
    insere_circularmente(lista, 0);
    insere_circularmente(lista, 1);
    insere_circularmente(lista, 2);
    insere_circularmente(lista, 3);
    insere_circularmente(lista, 4);
    imprime_lista(lista);
}