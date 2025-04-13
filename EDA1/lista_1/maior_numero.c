#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int  n;
    long int resultado = 1;
    long int temp = 1;
    int v;


    scanf("%d %d", &a, &b);

    for(int j = 0; j < b; j++){
        resultado *= a;
    } 

    scanf("%d",&n);
    v = n;
    temp = n;

    for (int i = 1; i < n; i++){
        temp = (v - i) * temp;
    }
    if(resultado > temp){
        printf("Lucas\n");
    }
    if(temp > resultado)
        printf("Pedro\n");
    return 0;
}
