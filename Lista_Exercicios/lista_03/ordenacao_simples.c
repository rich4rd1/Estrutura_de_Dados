#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int *v, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (v[j] < v[j - 1])
            {
                troca(&v[j], &v[j - 1]);
            }
        }
    }
}

int main()
{
    int vet[1001];
    int count = 0;

    int i = 0;
    while (scanf("%d", &vet[i]) != EOF && i < 1000)
    {
        i++;
        count = i;
    }


    insertion_sort(vet, count);
    for (int i = 0; i < count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", vet[i]);
    }
}