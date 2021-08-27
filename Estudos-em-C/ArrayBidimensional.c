/* inicialização de um array bidimensional */

#include <stdio.h>
#include <stdlib.h>

#define ALUNO 5
#define NOTA 3

int main()
{
    int linha, coluna;
    float notas [ALUNO][NOTA]; // poderia se aplicar diretamene o número de linhas e colunas dentro dos colchetes, porém, para aprendizado, optei por criar duas constantes, o que facilita a manutenção em um projeto maior

    for (size_t linha = 0; linha < ALUNO; linha++)
    {
        for (size_t coluna = 0; coluna < NOTA; coluna++)
        {
            notas[linha][coluna] = rand() % 10 + 1; // função range gera números aleatórios, nesse caso, de 1 a 10
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