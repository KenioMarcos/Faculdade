/* Cadastro de veículos */

#include <stdio.h>
#include <string.h>

typedef struct
{
    char marca[30];
    char modelo[30];
    int ano;
    char placa[10];
} Veiculo;

void printcarros(Veiculo * carros, int quantidade, int * filtroano, int * filtroMinano, char * filtromodelo) {
    if (quantidade < 1) {
        printf("Nenhum Veículo Registrado.\n");
        return;
    }

    printf("Marca, Modelo, Ano, Placa\n");
    int i;
    for (i = 0; i < quantidade; i++) {
        if (filtroano != NULL && carros[i].ano != *filtroano) {
            continue;
        }
        if (filtroMinano != NULL && carros[i].ano < *filtroMinano) {
            continue;
        }
        if (filtromodelo != NULL && strstr(carros[i].modelo, filtromodelo) == NULL) {
            continue;
        }

        printf("%s, %s, %d, %s\n", carros[i].marca, carros[i].modelo, carros[i].ano, carros[i].placa);
    }
}

int readCar(Veiculo * carros, int quantidade) {
    if (quantidade >= 10) {
        printf("Excedido o limite de carros.\n");
        return quantidade;
    }

    Veiculo creating;
    printf("Digite a Marca, Modelo, Ano e Placa separados por espaço:\n");
    char marca[50];
    char modelo[50];
    int ano;
    char placa[10];
    scanf("%s %s %d %s", &creating.marca, &creating.modelo, &creating.ano, &creating.placa);
    fflush(stdin);
    carros[quantidade] = creating;
    printf("Registrado.\n");
    return ++quantidade;
}

int main() {
    Veiculo carros[10];
    int quantidade = 0;

    while (1) {
        printf("Digite o código do serviço:\n1 -> Listar Veículos\n2 -> Registrar Novo Veículo\n3 -> Filtrar Veículo por Ano\n4 -> Filtrar Veículo por Ano Mínimo\n5 -> Filtrar Veículo por Modelo\n6 -> Sair\nNúmero do comando: ");
        int answer;
        scanf("%d", & answer);
        fflush(stdin);

        if (answer == 1) {
            printcarros(carros, quantidade, NULL, NULL, NULL);
        } else if (answer == 2) {
            quantidade = readCar(carros, quantidade);
        } else if (answer == 3) {
            printf("Digite o ano: ");
            int ano;
            scanf("%d", & ano);
            printcarros(carros, quantidade, & ano, NULL, NULL);
        } else if (answer == 4) {
            printf("Digite o ano: ");
            int ano;
            scanf("%d", & ano);
            printcarros(carros, quantidade, NULL, & ano, NULL);
        } else if (answer == 5) {
            printf("Digite o modelo: ");
            char modelo[10];
            scanf("%s", & modelo);
            printcarros(carros, quantidade, NULL, NULL, modelo);
        } else if (answer == 6) {
            printf("Até Logo!\n");
            break;
        } else {
            printf("Comando inválido, tente novamente.\n");
        }
        printf("\n");
    }

    printf("Aplicação Encerrada.\n");
    return 0;
}