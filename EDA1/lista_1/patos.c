#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

char mapa[MAX][MAX];
int linhas = 0, colunas = 0;
int inicio_x, inicio_y, destino_x, destino_y;

void lerEntrada(int* patinhos) {
    scanf("%d", patinhos);
    getchar();

    char caractere;
    int i = 0, j = 0;

    while (scanf("%c", &caractere) != EOF) {
        if (caractere == '\n') {
            mapa[i][j] = '\0';
            i++;
            if (colunas == 0) colunas = j;
            j = 0;
            continue;
        }

        mapa[i][j] = caractere;

        if (caractere == 'S') {
            inicio_x = j;
            inicio_y = i;
        } else if (caractere == 'E') {
            destino_x = j;
            destino_y = i;
        }

        j++;
    }
    linhas = i;
}

int simularCaminho(int patinhos) {
    int x = inicio_x;
    int y = inicio_y;
    int restantes = patinhos;

    while (restantes > 0) {
        mapa[y][x] = '#';

        if (x == destino_x && y == destino_y) {
            return restantes;
        }

        if (mapa[y + 1][x] == '_' || mapa[y + 1][x] == 'E') {
            y++;
        } else if (mapa[y][x + 1] == '_' || mapa[y][x + 1] == 'E') {
            x++;
        } else if (mapa[y][x - 1] == '_' || mapa[y][x - 1] == 'E') {
            x--;
        } else if (mapa[y - 1][x] == '_' || mapa[y - 1][x] == 'E') {
            y--;
        } else if (mapa[y + 1][x] == 'o') {
            y++;
            mapa[y][x] = '_';
            restantes--;
        } else if (mapa[y][x + 1] == 'o') {
            x++;
            mapa[y][x] = '_';
            restantes--;
        } else if (mapa[y][x - 1] == 'o') {
            x--;
            mapa[y][x] = '_';
            restantes--;
        } else if (mapa[y - 1][x] == 'o') {
            y--;
            mapa[y][x] = '_';
            restantes--;
        } else {
            restantes = 0;
        }
    }

    return 0;
}

int main() {
    int total_patinhos;
    lerEntrada(&total_patinhos);

    int sobreviventes = simularCaminho(total_patinhos);

    if (sobreviventes == 0) {
        printf("Todos morreram :)\n");
    } else if (sobreviventes == total_patinhos) {
        printf("Nenhum morreu :(\n");
    } else {
        printf("%d encontraram o vovo\n", sobreviventes);
    }

    return 0;
}
