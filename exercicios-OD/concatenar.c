// Concatenar duas listas.      

#include <stdio.h>
#include <stdlib.h>

typedef struct node no;
typedef struct head cabeca;

struct node
{
    int dado; 
    no *prox;   
};

struct head{
    int quant_elem;
    no *prox;
    no *ultimo;
};

cabeca create_head(){
    cabeca *novo = (cabeca *)malloc(sizeof(cabeca));
    novo -> prox = NULL;
    novo ->quant_elem = 0;
    novo -> ultimo = NULL;
    return novo;
}


no *create_node(int dado){
    no *novo = (no *)malloc(sizeof(no));
    novo -> dado = dado;
    novo -> prox = NULL;
    return novo;
}

add_node(cabeca *lista, int dado){
    no *novo = create_node(dado);

    if(lista -> prox == NULL){
        lista->prox = novo;
        lista->ultimo = novo;
    }else{
        lista->ultimo->prox = novo;
        lista->ultimo = novo;
    }
    lista ->quant_elem++;
}

print_list(no *lista){
    no *novo = lista;
    while (novo != NULL)
    {
        printf("[%d] --> ", novo ->dado);
        novo = novo -> prox;
    }
    printf("NULL\n");
}

no *concatena(no *lista, no *lista2,){
    if (lista == NULL)
    {
        return lista2;
    }
    
    while (lista != NULL)
    {
        lista = lista -> prox;
    }
    lista -> prox = lista2;
    return lista;

}