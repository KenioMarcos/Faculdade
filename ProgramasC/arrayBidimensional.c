/* este programa mostra a inicialização de um array bidimensional */

#include <stdio.h>
#include <stdlib.h>

/*
#define COL 4
#define LIN 5

int main ()
{
    float notas[LIN][COL] = {
                            {7.5, 6.8, 9.6, 6.7}, 
                            {6.5, 6.3, 8.4, 7.6},
                            {5.7, 8.6, 9.0, 4.5},
                            {4.5, 5.8, 6.8, 7.0},
                            {6.6, 7.6, 8.1, 6.5}
                            };
    
    printf("Conteúdo da matriz:\n\n");

    for (size_t linha = 0; linha < LIN; linha++)
    {
        for (size_t coluna = 0; coluna < COL; coluna++)
        {
            printf("%5.1f", notas[linha][coluna]);
        }
        printf("\n");
    }
    printf("\nValor da 2ª linha, 3ª coluna: %4.1f", notas[1][2]);
    printf("\n\n");
    return 0;
}
*/


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