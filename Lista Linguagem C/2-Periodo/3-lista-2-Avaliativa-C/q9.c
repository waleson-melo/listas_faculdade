#include<stdio.h>

typedef struct proprietario{
    long int cpf;
    char nome[50];
}Proprietario;

typedef struct carro{
    char modelo[30];
    int ano;
    char placa[10];
    Proprietario proprietario;
}Carro;

int main()
{
    Carro carro;

    printf("Modelo: ");
    scanf("%[^\n]s", carro.modelo);
    setbuf(stdin, NULL);
    printf("Ano: ");
    scanf("%d", &carro.ano);
    setbuf(stdin, NULL);
    printf("Placa: ");
    scanf("%[^\n]s", carro.placa);
    setbuf(stdin, NULL);

    printf("CPF: ");
    scanf("%ld", &carro.proprietario.cpf);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]s", carro.proprietario.nome);

    printf("===========DADOS============\n");
    printf("Modelo: %s\nAno: %d\nPlaca: %s\n", carro.modelo, carro.ano, carro.placa);
    printf("CPF: %ld\nNome: %s\n", carro.proprietario.cpf, carro.proprietario.nome);

    return 0;
}