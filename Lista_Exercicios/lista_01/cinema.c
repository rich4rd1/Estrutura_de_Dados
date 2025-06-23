#include <stdio.h>
int main()
{
    int i, j, F, L, lugar, cinema[20][25] = {};
    char fileira;

    scanf("%d %d", &F, &L);

    getchar();
    while(scanf("%c%d", &fileira, &lugar) != EOF) {
        cinema[fileira-'A'][lugar-1] = 1;
    }

    //printa a primeira linha da matriz; indica as colunas/lugares
    printf(" ");
    for(i = 1; i <= L; i++) 
        printf(" %02d", i);

    printf("\n");
    //printar fileiras
    for(i = F-1; i >= 0; i--) {
    printf("%c", i+'A');
        for(j = 0; j < L; j++) {
            if(cinema[i][j] == 1)
            printf(" XX");

            else
            printf(" --");
        }
    printf("\n");
    }
  
return 0;
}