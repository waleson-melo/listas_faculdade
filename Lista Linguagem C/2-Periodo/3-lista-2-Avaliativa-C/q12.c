#include<stdio.h>
#include<string.h>

#define T 2

typedef struct endereco{
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[30];
    int cep;
    char cidade[40];
    char estado[40];
    char pais[40];
}Endereco;

typedef struct telefone{
    int ddd;
    int numero;
}Telefone;

typedef struct data{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct pessoa{
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    char observacao[50];
}Pessoa;

void inserir(Pessoa *agenda[T]);
void buscarPorNome(Pessoa agenda[T], int quant);

int main()
{
    Pessoa agenda[T];
    int i = 1, op, quant = 0;

    while(i != 0){
        printf("==========AGENDA==========\n");
        printf("1 - Inserir\n2 - Buscar por nome\n3 - \n0 - Sair\nOpcao: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                inserir(&agenda);
                quant++;
                break;
            case 2:
                buscarPorNome(agenda, quant);
                break;
            case 0:
                i = 0;
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}

// FUNÇOES
void inserir(struct pessoa *agenda[T])
{
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]s", agenda[0]->nome);
}

// void buscarPorNome(Pessoa agenda[T], int quant)
// {
//     int i;
//     char pesq[50];
//     printf("========PESQUISA=========\n");
//     setbuf(stdin, NULL);
//     printf("Nome: ");
//     scanf("%[^\n]s", pesq);
//     for(i = 0; i < quant; i++){
//         if(strcmp(pesq, agenda[i].nome) == 0){
//             printf("Nome: %s\n", agenda[i].nome);
//         }
//     }
// }