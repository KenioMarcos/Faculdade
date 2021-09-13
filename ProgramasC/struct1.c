/* modelo de tipos de dados estruturados */

#include <stdio.h>
#include <stdlib.h>

/* struct data
{
    int mes;
    int ano;
};*/

struct livro
{
    char nome[30];
    char autor[50];
    int paginas;
    float preco;
}livro1;

int main()
{
    printf("##### Cadastro de Livro #####\n");
    printf("\nDigite o nome do livro: ");
    gets(livro1.nome);
    printf("Digite o nome do autor: ");
    gets(livro1.autor);
    printf("Digite o número de páginas do livro: ");
    scanf("%d", &livro1.paginas);
    printf("Digite o preço do livro: ");
    scanf("%f", &livro1.preco);

    printf("\nO livro \"%s\", escrito por \"%s\", possui %d páginas e custa R$ %.2f\n", livro1.nome, livro1.autor, livro1.paginas, livro1.preco);

    printf("\n");
    return 0;
}