#include <stdio.h>

int f91(int N)
{
    if (N >= 101)
        return N - 10;

    else
        return f91(f91(N + 11));
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("f91(%d) = %d \n", n, f91(n));
        scanf("%d", &n);
    }
}
