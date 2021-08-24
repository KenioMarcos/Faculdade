/* recebe dois números, verifica se são positivos, se forem executa uma soma e imprime o resultado,
se não forem positivos, retorna para o início */

#include <stdio.h>

int main()
{
    int vlr1, vlr2, soma;

    do
    {
        printf("Informe um número positivo: ");
        scanf("%d", &vlr1);
        printf("Informe outro número positivo: ");
        scanf("%d", &vlr2);
    } while (vlr1 < 0 || vlr2 < 0);
    soma = (vlr1 + vlr2);
    printf("A soma de %d + %d = %d\n", vlr1, vlr2, soma);
    return 0;
}