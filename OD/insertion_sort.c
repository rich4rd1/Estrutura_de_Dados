#include <stdio.h>
#define exch(A, B) {int t = A; A = B; B =t;}

void insertion_sort(int *v, int l, int r){

    for (int i = l+1 ; i <= r; i++)          
    {
        for (int j = i; j > l ; j--){
            if (v[j] < v[j - 1])
            {
                exch(v[j] , v[j - 1]);
            }
            
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