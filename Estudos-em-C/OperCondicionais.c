/* exemplo de uso de operadores condicionais */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Digite o valor da nota: ");
    scanf("%d", &nota);

    printf("%s\n", nota >= 60 ? "Aprovado" : "Reprovado");

    // ou

    nota >= 60 ? printf("Aprovado\n") : printf("Reprovado\n");

    return 0;
}