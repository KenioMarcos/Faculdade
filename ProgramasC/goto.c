// formas básicas do goto, for, while e do while

#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0, l = 0, count = 3;
    
    imprimir:
        printf("o valor de i é: %d\n", i);
        i++;
        if (i < 3)
            goto imprimir;
    
    printf("#################\n");

    for (size_t j = 0; j < count; j++)
    {
        printf("o valor de j é: %d\n", i);
    }
    
    printf("#################\n");

    while (k < 3)
    {
        printf("o valor de k é: %d\n", k);
        k++;
    }
    
    printf("#################\n");

    do
    {
        printf("o valor de l é: %d\n", l++);
    } while (l < 3);
    







    return 0;
}