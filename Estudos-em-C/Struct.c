/* modelo de tipos de dados estruturados */

#include <stdio.h>
#include <stdlib.h>

struct data
{
    int mes;
    int ano;
};

struct livro
{
    char nome[30];
    char autor[50];
    struct data data_pub;
};

int main()
{
    struct livro l1 = {"Primo Basílio", "Eça de Queiroz"};
    l1.data_pub.ano = 1878;
    struct livro l2 = {"Dom Casmurro", "Machado de Assis"};
    l2.data_pub.ano = 1899;
    
    printf("Livro 1: %s - Autor: %s - Ano: %d\n", l1.nome, l1.autor, l1.data_pub.ano);
    printf("Livro 2: %s - Autor: %s - Ano: %d\n", l2.nome, l2.autor, l2.data_pub.ano);
        
    printf("\n\n");
    return 0;
}