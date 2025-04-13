#include <stdio.h>

int encaixa(int a, int b)
{
    int dig_a, dig_b;
    int tamanho = 0;
    while (b > 0)
    {
        dig_a = a % 10;
        dig_b = b % 10;

        if (dig_b != dig_a)
        {
            return 0;
        }

        a = a / 10;
        b = b / 10;
    }
    return 1;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (encaixa(a, b))
    {
        printf("1");
    }
    else
        printf("0");
}