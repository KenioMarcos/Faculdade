/* recebe dois números, verifica se são positivos, se forem positivos executa a soma e imprime o resultado na tela, se não forem positivos, retorna para o início */

# include <stdio.h>

int main()
{
    int vlr1 = -1, vlr2 = -1, soma; // no while, as variáveis precisam ser iniciadas

    while (vlr1 < 0 || vlr2 < 0)
    {
        printf("Informe um valor positivo: ");
        scanf("%d", &vlr1);
        printf("Informe outro valor positivo: ");
        scanf("%d", &vlr2);
    }
    soma = (vlr1 + vlr2);
    printf("A soma de %d + %d é = %d\n", vlr1, vlr2, soma);

    return 0;
}