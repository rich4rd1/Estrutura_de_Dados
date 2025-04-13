#include <stdio.h>

int main()
{

    int N;
    long long int somador = 0;
    int temp = 0;
    
    scanf("%d", &N);
    
    if (N < 10)
    return 1;
    if (N > 10000)
    return 1;
    
    int vet[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
        somador += vet[i];
    }
    int media = somador / N;

    
    for (int j = 0; j < N; j++)
    {
        if (vet[j] > media)
        {
            printf("%d ", vet[j]);
            temp ++;
        }
    }

    if (temp == 0)
    {
        printf("0");
    }
    printf("\n");

    return 0;
}