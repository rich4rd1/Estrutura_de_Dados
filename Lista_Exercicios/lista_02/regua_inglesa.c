#include <stdio.h>

void imprime_traco(int n)
{
    printf(".");

    for (int i = 0; i < n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void regua(int n)
{
    if (n == 0)
        return;

    regua(n - 1);
    imprime_traco(n);   
    regua(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    regua(n);
}