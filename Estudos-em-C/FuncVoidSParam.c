/* Cria uma função void sem parâmetros para imprimir na tela uma linha com n símbolos */

#include <stdio.h>

void linha()
{
    int i;
    int count = 30;

    for (size_t i = 0; i <= count; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int i;
    int count = 10;
    
    linha();
    printf("números de 1 a 10:\n");
    for (size_t i = 0; i <= count; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    linha();
    printf("\n");

    return 0;
}