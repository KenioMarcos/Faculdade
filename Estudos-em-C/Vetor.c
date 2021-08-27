/* inicialização de um vetor, também conhecido por array */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
    int i, idades [MAX] = {25, 21, 32,40, 69};

    for (size_t i = 0; i < MAX; i++)
    {
        printf("%3d", idades[i]);
    }
    printf("\n\n");
    return 0;
}