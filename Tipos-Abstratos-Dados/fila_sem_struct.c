#include <stdio.h>
#include <stdlib.h>

#define N 10
int p;
int u;
int vet[N];

void cria_lista(){
    p = u = 0;
}

int  desenfileirar(){
    return vet[p++];
}

void enfileirar(int y){
    vet[u++] = y;
}

void imprime_fila() {
    printf("Fila:\n");
    for (int i = p; i < u; i++)
    {
        printf("F[%d]\n",vet[i]);
    }
    printf("\n");
}


int main() {
    cria_lista();
    printf("Adicionando elementos na fila:\n");
    for (int i = 0; i <= N; i++)
    {
        enfileirar(i);
        imprime_fila();
    }
    printf("Removendo elementos na fila:\n");
    for (int i = 0; i <5; i++)
    {
        int removido = desenfileirar();
        if (removido != -1)
        {
            printf("Removido: %d\n",removido);
        }
    imprime_fila();
    }   
    
}