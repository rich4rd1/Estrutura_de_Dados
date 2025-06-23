#include <stdio.h>

void contrario(char *v)
{
    if (v[0] == '\0')
        return;

    else{
        contrario(v + 1);
        printf("%c", v[0]);
    }
    
}

int main()
{
    int n;
    char v[500];
    scanf("%s", v);
    contrario(v);
    printf("\n");
}