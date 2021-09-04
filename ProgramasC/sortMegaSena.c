/* gera números aleatórios para aposta na mega sena */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dezenaSorteada()
{
    int dezena;

    do
    {
        dezena = rand() % 61;
    } while (dezena == 0);
    return dezena;
}

int main()
{
    int quantidade;

    srand(time(NULL));

    printf("Quantidade de dezenas a serem sorteadas: ");
    scanf("%d", &quantidade);

    for (size_t i = 0; i < quantidade; i++)
    {
        printf("Sorteio [%d]: %d\n", i + 1, dezenaSorteada());
    }
    return 0;
}