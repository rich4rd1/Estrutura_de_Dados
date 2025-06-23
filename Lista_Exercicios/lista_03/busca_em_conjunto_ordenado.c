#include <stdio.h>

int busca_binaria(int vet[],int tamanho,int x){
    int inicio = 0;
    int fim = tamanho - 1;
    
    if (x <= vet[0]) {
        return 0;
    }
    
    if (x > vet[tamanho - 1]) {
        return tamanho;
    }
    
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        
        if (vet[meio] == x) {
            return meio;
        }
        
        if (vet[meio] < x) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    
    return inicio;
}

int main(){
    int n,m,x;
    scanf("%d",&n);
    scanf("%d",&m);
    int vet[n];
    for(int i = 0; i< n; i++){
        scanf("%d",&vet[i]);
    }
    for(int i = 0; i< m; i++){
        scanf("%d",&x);
        int j = busca_binaria(vet,n,x);
        printf("%d\n",j);
    }
    return 0;
}