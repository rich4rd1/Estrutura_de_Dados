#include <stdio.h>

// primeiro que entra e o primeiro que sai 
// definir o vetor 
// definir o tamanho do vetor 
// criar a pilha 
// inserir 
// remover 


#define MAX 10

int pilha[MAX];
int topo;

void cria_pilha(){
    topo = 0;
}

void empilha(int x){
    pilha[topo++] = x;
}

int desempilha(){
    return pilha[--topo];
}

void imprime_pilha(){
    for (int i = 0; i < topo; i++)
    {
        printf("[%d] ", pilha[i]);
    }
    printf("\n");   
}

int main(){
    empilha(1);
    empilha(2);
    empilha(3);
    empilha(4);
    empilha(5);
    imprime_pilha();
    desempilha();
    imprime_pilha();
}