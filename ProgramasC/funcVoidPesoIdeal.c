/* Cria uma função void com parâmetros para calcular o peso ideal*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // necessária para usar a função toupper

void peso_ideal(char sexo, float altura) // também poderia ser uma função tipada, no caso, com float
{
    float peso_ideal;
    switch (toupper(sexo)) // toupper para deixar as letras em maiúsculas
    {
    case 'F':
        peso_ideal = altura * 62.1 - 44.7;
        break;
    case 'M':
        peso_ideal = altura * 72.7 - 58;
        break;
    default:
        printf("Sexo inválido! Digite M ou F\n");
        break;
    }
    printf("Peso ideal: %.2f\n", peso_ideal);
}

int main()
{
    char sexo;
    float altura;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    printf("Digite sua altura, em metros: ");
    scanf("%f", &altura);

    peso_ideal(sexo, altura);
    
    printf("\n");

    return 0;
}