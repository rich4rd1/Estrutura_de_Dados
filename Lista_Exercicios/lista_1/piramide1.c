#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int num = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (num < 10)
            {
                printf("0%d ", num);
            }
            else
                printf("%d ", num);
        }
        printf("\n");
        num++;
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j < 10)
            {
                printf("0%d ", j);
            }
