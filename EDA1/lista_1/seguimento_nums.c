#include <stdio.h>

int encaixa(int a, int b)
{
    int dig_a, dig_b;
    int tamanho = 0;
    while (b > 0)
    {
        dig_a = a % 10;
        dig_b = b % 10;

        if (dig_b != dig_a)
        {
            return 0;
        }

        a = a / 10;
        b = b / 10;
    }
    return 1;
}

int segmento(int a, int b){
    int menor, maior, potencia = 1;

    if (a < b) {
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    int aux = maior;
    int aux2 = menor;

    int casas = 0;
    if (menor == 0) {
        casas = 1;
    } else {
        while (menor > 0)
        {
            menor = menor / 10;
            casas++;
        }
    }

    // fazer a potencia 
    for (int i = 0; i < casas; i++)
    {
        potencia = potencia * 10;
    }

    while (aux > 0)
    {
        if (aux % potencia == aux2)
        {
            return 1;
        }
        aux /= 10;
    }

    return 0;
}

