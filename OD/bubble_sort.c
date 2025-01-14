#include <stdio.h>
#define exch(A, B) {int t = A;A = B;B = t;}


void bubble_sort(int *v, int l, int r)
{

    for (int j = l; j < r ; j++)
    {
        // Este for aqui, ele literalmente faz as trocas so para a posição zero, ou seja, depois que ele trocar todo mundo de lugar
        // ele não vai rodar mais e so terá organizado o primeiro termo, por isso é nescessario que façamos um outro for por fora
        for (int i = l; i < r; i++)
        {
            if ((v[i + 1] < v[i]))
                exch(v[i + 1], v[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int vet[] = {5,4,3,2,1,0};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    printf("o vetor antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vet[i]);
    }
    printf("\n");
   bubble_sort(vet, 0, tamanho - 1);

    printf("o vetor depois da ordenacao:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vet[i]);
    }

    return 0;
}