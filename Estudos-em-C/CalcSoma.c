// recebe dois valores, efetua uma soma e imprime o resultado

#include <stdio.h>

int main()
{
    int vlr1, vlr2, soma;

    printf("Informe o primeiro valor: ");
    scanf("%d", &vlr1);
    printf("Informe o segundo valor: ");
    scanf("%d", &vlr2);

    soma = (vlr1 + vlr2);

    printf("A soma de %d + %d = %d\n", vlr1, vlr2, soma);

    return 0;
}