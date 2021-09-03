/* Formas de manipular arquivos no C */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaração de ponteiro
    FILE *parq;

    /*
    r  - abre um arquivo-texto para leitura
    w  - cria um arquivo-texto para escrita
    a  - anexa (incrementa dados no final do arquivo original) a um arquivo-texto
    r+ - abre um arquivo-texto para leitura/escrita
    w+ - cria um arquivo-texto para leitura/escrita
    a+ - anexa ou cria um arquivo-texto para leitura/escrita
    */

    parq = fopen("/home/kmarcos/Documentos/marcos1.txt", "w");

    // verifica se o arquivo foi criado ou aberto com sucesso

    if (parq == NULL)
    {
        printf("Erro ao criar ou abrir o arquivo solicitado\n");
        return 0;
    }
    
    // comando para fechar o arquivo
    fclose(parq);

    // comando para aguardar teclar para encerrar a aplicação
    getchar();
    return 0;
}