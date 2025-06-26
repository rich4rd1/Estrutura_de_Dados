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
    
    //verificar se a proxima posição é y (pra isso preciso saber quem vem antes)
    //se for eu insiro no nó atual e atualizo pra quem esse nó vai apontar 
    //se não for igual, eu continui andando no vetor até chegar em null 
    //quando eu chegar em null tenho que colocar o x antes de null
    //verificando e atualizando meu antes para atual, e atual para proximo
}