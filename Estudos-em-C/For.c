/* Imprime na tela um nome n vezes */

#include <stdio.h>

int main()
{
    int count;

    printf("Informe o número de vezes para impressão em tela: ");
    scanf("%d", &count);
    printf("\n");

    for (size_t i = 0; i <= count; i++)
    {
        printf("Ursinho Puth, Impressão %d\n", i);
    }
    printf("\n");
    return 0;
}