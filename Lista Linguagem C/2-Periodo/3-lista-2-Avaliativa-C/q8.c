#include<stdio.h>

typedef struct endereco{
    char logradouro[50];
    int numero;
    char bairro[30];
    long int cep;
}Endereco;

typedef struct cliente{
    int matricula;
    char nome[50];
    Endereco endereco;
}Cliente;

int main()
{
    Cliente cliente;

    printf("Matricula: ");
    scanf("%d", &cliente.matricula);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]s", cliente.nome);
    setbuf(stdin, NULL);

    printf("Logradouro: ");
    scanf("%[^\n]s", cliente.endereco.logradouro);
    printf("Numero: ");
    scanf("%d", &cliente.endereco.numero);
    setbuf(stdin, NULL);
    printf("Bairro: ");
    scanf("%[^\n]s", cliente.endereco.bairro);
    printf("Cep: ");
    scanf("%ld", &cliente.endereco.cep);

    printf("===========DADOS============\n");
    printf("Matricula: %d\nNome: %s\n", cliente.matricula, cliente.nome);
    printf("Logradouro: %s\nNumero: %d\nBairro: %s\nCep: %ld\n", 
        cliente.endereco.logradouro, cliente.endereco.numero, 
        cliente.endereco.bairro, cliente.endereco.cep);

    return 0;
}