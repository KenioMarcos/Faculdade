/* Cria uma função void com parâmetros para imprimir na tela uma linha com n símbolos */

#include <stdio.h>

void linha(char c, int count)
{
    int i;
    
    for (size_t i = 0; i <= count; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main()
{
    int i;
    int count = 10;
        
    linha('#', 30);
    printf("números de 0 a 10:\n");
    for (size_t i = 0; i <= count; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    linha('#', 30);
    printf("\n");
    
    return 0;
}