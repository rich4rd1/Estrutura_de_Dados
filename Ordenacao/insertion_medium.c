#include <stdio.h>
#define exch(A, B) {int t = A; A = B; B =t;}

void insertion_sort(int *v, int l, int r)
{
//Procurando e setando a posição do menor valor no vetor
    for (int i = r; i > l; i--)
    {
        if (v[i] < v[i - 1])
            exch(v[i], v[i - 1]);
    }
//Criando uma torre ou um pivo que sirva de referncia 
    for (int i = l + 2; i <= r; i++)
    {
        int j = i;
        int temp = v[j];
        while (temp <  v[j - 1])
        {
            v[j] = v[j - 1];
            j --;
            v[j] = temp;
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
    insertion_sort(vet, 0, tamanho - 1);

    printf("o vetor depois da ordenacao:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vet[i]);
    }

    return 0;
}