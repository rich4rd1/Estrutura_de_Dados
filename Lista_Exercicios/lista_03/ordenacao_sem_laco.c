#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int menor_pos(int *v, int e, int d)
{
    if (e == d - 1)
        return e;
    int menor = menor_pos(v, e + 1, d);
    if (v[e] < v[menor])
    {
        return e;
    }
    else
        return menor;
}

void ordena(int *v, int n)
{
    if (n <= 1)
        return;

    int m = menor_pos(v, 0, n);
    troca(&v[0], &v[m]);
    ordena(v + 1, n - 1);
}