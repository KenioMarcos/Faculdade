/* este programa mostra a inicialização de um array bidimensional */

#include <stdio.h>
#include <stdlib.h>

#define ALUNO 5
#define NOTA 3

int main()
{
    int linha, coluna;
    float notas [ALUNO][NOTA]; 

    for (size_t linha = 0; linha < ALUNO; linha++)
    {
        for (size_t coluna = 0; coluna < NOTA; coluna++)
        {
            notas[linha][coluna] = rand() % 10 + 1;
        }
    }
    for (size_t linha = 0; linha < ALUNO; linha++)
    {
        for (size_t coluna = 0; coluna < NOTA; coluna++)
        {
            printf("%.2f\t", notas[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
    float maior;
    for (size_t linha = 0; linha < ALUNO; linha++)
    {
        maior = notas[linha][0];
        for (size_t coluna = 1; coluna < NOTA; coluna++)
        {
            if (notas[linha][coluna] > maior)
            {
                maior = notas[linha][coluna];
            }
        }
        printf("Maior nota do aluno %d: %.2f\n", linha, maior);
    }
    printf("\n");
    return 0;
}