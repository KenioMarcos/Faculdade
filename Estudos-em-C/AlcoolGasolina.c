/* analisa se é melhor abastecer com álcool ou gasolina */

#include <stdio.h>
#include <stdlib.h>

int calculo(float vGas, float vAlc)
{
    if((vGas * 0.70) < vAlc) // compensa abastecer com gasolina
    return 0;

    else if ((vGas * 0.70) > vAlc) // compensa abastecer com álcool
    return 1;

    else // tanto faz
    return 2; 
}

int main()
{
    float precoGasolina, precoAlcool;
    int resultado;

    printf("Informe o preço da gasolina: ");
    scanf("%f", &precoGasolina);
    printf("Informe o preço do álcool: ");
    scanf("%f", &precoAlcool);

    resultado = calculo(precoGasolina, precoAlcool);

    if (resultado == 0)
    {
        printf("É melhor abastecer com gasolina.\n");
    }
    else if (resultado == 1)
    {
        printf("É melhor abastecer com álcool.\n");
    }
    else
    {
        printf("Tanto faz.\n");
    }
    printf("\n");
    return 0;
}