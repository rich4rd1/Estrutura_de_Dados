#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double temp_a = (double)tA / 3600;
    double temp_b = (double)tB / 3600;
    double final = temp_b - temp_a;
    return distancia/final;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    
    if(calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima)
        return 1;
    else
        return 0;
}


int main(){
    double a = 54169;
    double b = 57346;
    double v = 170;
    double res = calculaVelocidadeMedia(a,b,v);
    int multa = levouMulta(61200,63000,60.0,120.0);
    printf("%f \n %d",res, multa);
}