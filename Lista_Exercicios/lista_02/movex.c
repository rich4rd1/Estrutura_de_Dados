#include <stdio.h>

void movex(char string[100])
{
    if (string[0] == '\0')
    {
        return;
    }

    if (string[0] != 'x')
    {
        printf("%c", string[0]);
    }

    movex(&string[1]);

    if (string[0] == 'x')
    {
        printf("%c", string[0]);
    }
}
int main()
{
    char *str[100];
    scanf("%s", &str);
    movex(&str);
    printf("\n");
    return 0;
}
