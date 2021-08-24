/* inicialização de um array tridimensional */

#include <stdio.h>
#include <stdlib.h>

#define ALUNO 5
#define NOTA 3
#define ESCOLA 2

int main()
{
    int linha, coluna, profundidade;
    float notas [ALUNO][NOTA][ESCOLA];

    for (size_t profundidade = 0; profundidade < ESCOLA; profundidade++)
    {
        for (size_t linha = 0; linha < ALUNO; linha++)
        {
            for (size_t coluna = 0; coluna < NOTA; coluna++)
            {
                notas[linha][coluna][profundidade] = rand() % 10 + 1;
            }
        }
    }
    for (size_t profundidade = 0; profundidade < ESCOLA; profundidade++)
    {
        for (size_t linha = 0; linha < ALUNO; linha++)
        {
            for (size_t coluna = 0; coluna < NOTA; coluna++)
            {
                printf("%.2f\t", notas[linha][coluna][profundidade]);
            }
            printf("\n");
        }
        printf("\n");
    }
    float maior;

    for (size_t profundidade = 0; profundidade < ESCOLA; profundidade++)
    {
        for (size_t linha = 0; linha < ALUNO; linha++)
        {   
            maior = notas[linha][0][profundidade];
            for (size_t coluna = 1; coluna < NOTA; coluna++)
            {
                if (notas[linha][coluna][profundidade] > maior)
                {
                    maior = notas[linha][coluna][profundidade];
                }
            }
            printf("maior nota do aluno %d da escola %d: %.2f\n", linha, profundidade, maior);
        }
    }
    printf("\n\n");
    return 0;
}