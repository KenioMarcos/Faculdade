/* Função soma, com parâmetros, tipada, com impressão na tela do resultado */

#include <stdio.h>

int soma(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 5, b = 2;
    int c = soma(a, b);

    printf("%d + %d = %d\n\n", a, b, c);

    return 0;
}
