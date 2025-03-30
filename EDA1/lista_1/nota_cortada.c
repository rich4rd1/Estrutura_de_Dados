#include <stdio.h>

void nota_cortada(int b, int t){
	int res = (b + t)/2;
	int metade = 160/2;

	if(res > metade)
		printf("1");
	
	if(res < metade)
		printf("2");

	if(res == metade)
		printf("0");

}

int main(){
	int B,T;
	scanf("%d %d", &B, &T);
	nota_cortada(B,T);	

return 0;
}
