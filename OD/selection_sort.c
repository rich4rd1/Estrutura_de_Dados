#include <stdio.h>
#define exch(A, B) {int t = A;A = B;B = t;}

void selection_sort(int *v, int l, int r)
{
    // se for menor q l nem inicia, não tem como. e se for igual, quer dizer q l incrementou até chegar no mesmo valor q r, ou seja
    // l incrementou tanto que chegou ao final do vetor 
    if (r <= l)
        return;
    int min = l;

    // Serve apenas para verificar qual o menor valor dentro do vetor
    // Suponha [5, 4, 3, 2 ,1 ,0]
    for (int i = l + 1; i < r + 1; i++)
    {
        if (v[i] < v[min])
            min = i;
    }
    //O(n)
    // depois de verificar todo o vetor, ele troca as posiçoes
    exch(v[l], v[min]);
    // verificamos o vetor, achamamos o menor, trocamos, agora so falta fazer isso para o resto
    // Apos tudo isso precisamos chamar nossa função novamente até ela ordenar todos os valores do vetor
    selection_sort(v, l + 1, r);
    // Pórém, qual é a condição de parada ?
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
    selection_sort(vet, 0, tamanho - 1);

    printf("o vetor depois da ordenacao:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d]", vet[i]);
    }

    return 0;
}
