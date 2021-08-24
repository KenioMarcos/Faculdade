/* ordena um vetor */

#include <stdio.h>

#define MAX 5

int main()
{
    int idades [MAX] = {25, 21, 69,40, 32};
    int i, j, aux, pos_menor, menor;

    printf("Array fora de ordem:\n");
    
    for (size_t i = 0; i < MAX; i++)
    {
        printf("%4d", idades[i]);
    }
    for (size_t i = 0; i < MAX; i++)
    {
        menor = idades[i];
        pos_menor = i;

        for (size_t j = i + 1; j < MAX; j++)
        {
            if (idades[j] < menor)
            {
                menor = idades[j];
                pos_menor = j;
            }
        }    
        if (pos_menor != i)
        {
            aux = idades[i];
            idades[i] = idades[pos_menor];
            idades[pos_menor] = aux;
        }
    }
    int k;
    printf("\nArray em ordem:\n");
    for (size_t k = 0; k < MAX; k++)
    {
        printf("%4d", idades[k]);
    }
    printf("\n");
    return 0;
}