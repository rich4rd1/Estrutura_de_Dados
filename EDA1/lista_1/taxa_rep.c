#include <stdio.h>

int main()
{

    int disciplinas;
    int ano, semestre, qtd_disciplinas;
    int alunos_matriculados, qtd_alunos_aprovados;
    int discp_mais_reprovou;

    scanf("%d", &disciplinas);

    while (scanf("%d %d %d", &ano, &semestre, &qtd_disciplinas) != EOF)
    {
        int aux[qtd_disciplinas], codigo_dscp[qtd_disciplinas];
        int maior = -1;

        for (int i = 0; i < qtd_disciplinas; i++)
        {
            scanf("%d %d %d", &codigo_dscp[i], &alunos_matriculados, &qtd_alunos_aprovados);
            aux[i] = alunos_matriculados - qtd_alunos_aprovados;
            if (aux[i] > maior)
            {
                discp_mais_reprovou = codigo_dscp[i];
                maior = aux[i];
            }
        }
        printf("\n");

        int count = 0;
        int codigos_empatados[qtd_disciplinas];

        for (int i = 0; i < qtd_disciplinas; i++)
        {
            if (aux[i] == maior)
            {
                codigos_empatados[count++] = codigo_dscp[i];
            }
        }
        for (int i = 0; i < count - 1; i++)
        {
            for (int j = 0; j < count - 1 - i; j++)
            {
                if (codigos_empatados[j] > codigos_empatados[j + 1])
                {
                    int temp = codigos_empatados[j];
                    codigos_empatados[j] = codigos_empatados[j + 1];
                    codigos_empatados[j + 1] = temp;
                }
            }
        }
        printf("%d/%d\n", ano, semestre);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", codigos_empatados[i]);
        }
        printf("\n");
    }
}
