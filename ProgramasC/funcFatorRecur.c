/* Cria uma função para fatorar um número qualquer, depois essa função é chamada
no main para fatorar um dado número */

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int main()
{
    int resultado;
    resultado = fatorial(10); // dentro do parênteses você insere o número que quer fatorar
    printf("fatorial de 5 é: %d\n\n", resultado);
    
    return 0;
}