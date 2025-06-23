#include <stdio.h>

int main()
{
    int N;
    int m[100][100];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N - i; j++)
        {
            m[i][j] = i + 1; 
            m[j][i] = i + 1;
            m[N- 1 - i][j] = i + 1;
            m[j][N - 1 - i] = i + 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            printf("%d ", m[i][k]);
        }
        printf("\n");
    }
    return 0;
}