#include <stdio.h>
#include <stdlib.h>

#define MAX 100


void constroi_piramide(int N){
	int matriz[MAX][MAX];

	int camadas = (N+1) / 2;
	for(int camada = 0; camada < camadas; camada++){
		for(int i = camada; i < N - camada; i++){
			for(int j = camada; j < N - camada; j++){
				matriz[i][j] = camada + 1;
			}
		}
	}	
	for(int l = 0; l < N; l++){
		for(int k = 0; k < N; k++){
			printf("%d",matriz[l][k]);
		}
		printf("\n");
	}
}

int main(){
	int N;
	scanf("%d", &N);
	constroi_piramide(N);
	return 0;
}
