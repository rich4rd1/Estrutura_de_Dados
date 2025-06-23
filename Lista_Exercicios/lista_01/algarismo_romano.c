#include <stdio.h>

void converte_romanos(int N, int vet[])
{
    char *romanos[] = {"M","CM","D","CD","C", "XC","L","XL","X","IX","V","IV","I"};
    int decimais[] = {1000, 900, 500, 400, 100, 90,  50, 40, 10, 9, 5, 4, 1};
    char aux[3999];

    for (int i = 0; i < N; i++)
    {
        int valor = vet[i];
        for (int j = 0; j < 13; j++) {
            while (valor >= decimais[j]) {
                printf("%s", romanos[j]);
                valor -= decimais[j];
            }
        }
        printf("\n");
    }
}

int main()
{
    int N;
    int vet[3999];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }
    converte_romanos(N, vet);

    return 0;
}