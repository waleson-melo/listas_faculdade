#include <stdio.h>
#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}Pessoa;

int main()
{
    Pessoa aluno;
    char nome[30];

    printf("Nome completo: ");
    scanf("%[^\n]s", aluno.nome);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    setbuf(stdin, NULL);
    printf("Endereco: ");
    scanf("%[^\n]s", aluno.endereco);

    printf("\n===========================\n\n");
    
    printf("Nome: %s\n",aluno.nome);
    printf("Idade: %d\n",aluno.idade);
    printf("Endereco: %s\n",aluno.endereco);


    return 0;
}