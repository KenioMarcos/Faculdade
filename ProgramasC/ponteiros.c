#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int *x, valor, y;
    valor = 35;
    x = &valor;
    y = *x;

    printf("endereço da variável comum valor: %p\n", &valor);
    printf("lendo o conteúdo do ponteiro x: %p\n", x);
    printf("endereço da variável ponteiro x: %p\n", &x);
    printf("conteúdo da variável apontada por x: %d\n", *x);
    printf("conteúdo da variável comum y: %d\n", y);

    return 0;
}
*/

int main(void)
{
    int a = 40, *ponteiro1, **ponteiro2;

    ponteiro1 = &a;
    ponteiro2 = &ponteiro1;

    printf("O endereço da variável a é: %p\n", &a);
    printf("O endereço do ponteiro 1 é: %p\n", &ponteiro1);
    printf("O endereço do ponteiro 2 é: %p\n", &ponteiro2);
    printf("O endereço apontado pelo ponteiro 1 é: %p\n", ponteiro1);
    printf("O endereço apontado pelo ponteiro 2 é: %p\n", ponteiro2);
    printf("O valor armazenado em a é: %d\n", **ponteiro2);

    printf("\n");
    return 0;
}

// o símbolo * é chamado operador de indireção
/*
int main()
{
    char a, *b;
    
    a = 3;
    b = &a;

    printf("%d\n", *b);

    return 0;
}
*/

/*
// qual será o valor de count após a execução do seguinte código
int main()
{
    int x, *y, count;

    x = 100;
    count = 999;
    y = &x;
    count = *y;

    printf("%d\n", count);

    return 0;
}
*/

/*
// indireção múltipla (ponteiro para ponteiro)
void main(void)
{
    int x, *p, **q;

    x = 10;
    p = &x;
    q = &p;

    printf("%d\n", **q);
}
*/

/*
// muda o valor de uma variável de forma indireta
int main()
{
    int num, *p;
    num = 55;
    p = &num;

    printf("Valor inicial de num: %d\n", num);

    *p = 100;

    printf("Valor final de num: %d\n", num);
    
    return 0;
}
*/

/*
// função swap (troca) com ponteiros
// via passagem de parâmetros por referência
void swap (int *i, int *j)
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}
 
int main()
{
    int a, b;

    a = 5;
    b = 10;

    printf ("a e b valem %d, %d\n", a, b);
    swap (&a, &b);
    printf ("a e b agora valem %d, %d\n", a, b);

    return 0;
}
*/

/*
int main()
{
    int i;
    int vetorTeste[3] = {4, 7, 1};
    int *ptr = vetorTeste;
 
    printf("%p\n", vetorTeste);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
 
    for (i = 0; i < 3; i++)
    {
       printf("O endereço do índice %d do vetor é %p\n", i, &ptr[i]);
       printf("O valor do índice %d do vetor é %d\n", i, ptr[i]);
    }
    return 0;
}
*/

/*
// indexação de vetor
int main()
{
    int i;
    int vetor[10];

    for (i = 0; i < 10; i++)
    {
        printf ("Digite um valor para a posicao %d do vetor: ", i + 1);
        scanf ("%d", &vetor[i]); //isso é equivalente a fazer *(x + i)
    }
    printf("\n");
    for (i = 0; i < 10; i++) 
        printf("%d", vetor[i]);
    printf("\n\n");
    return (0);
}
*/

// mais um exemplo de ponteiro para ponteiro
/*
int main()
{
    int x, *p, **pp;

    x = 10;
    p = &x;
    pp = &p;

    printf("%d\n", **pp);

    return 0;
}
*/