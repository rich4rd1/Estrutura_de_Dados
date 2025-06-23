// Como eu sou uma porta, preciso ficar fazendo esses exercicios toda hora

#include <stdio.h>
#include <stdlib.h>

#define N 10
int primeiro, ultimo;
int vet[N];

void criar_fila(){
    primeiro = ultimo = 0;
}

void enfileira(int *v, int y){
    vet[ultimo++] = y;
}

int desenfileira(int *v){
    return vet[primeiro++];
}

void imprime_fila(){
    printf("\nEnfileirando o nosso array:\n");
    for (int i = 0; i < N; i++)
    {
        
    }
    

}