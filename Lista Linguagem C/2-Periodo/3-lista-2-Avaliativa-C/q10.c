#include<stdio.h>

typedef struct professor{
    long int cpf;
    char nome[50];
}Professor;

typedef struct disciplina{
    int codigo;
    char nome[50];
    Professor professor;
}Disciplina;

typedef struct aluno{
    int matricula;
    char nome[50];
    Disciplina disciplina;
}Aluno;

int main()
{
    Aluno aluno;

    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]", aluno.nome);

    printf("Codigo disciplina: ");
    scanf("%d", &aluno.disciplina.codigo);
    setbuf(stdin, NULL);
    printf("Nome disciplina: ");
    scanf("%[^\n]s", aluno.disciplina.nome);

    printf("CPF professor: ");
    scanf("%ld", &aluno.disciplina.professor.cpf);
    setbuf(stdin, NULL);
    printf("Nome professor: ");
    scanf("%[^\n]s", aluno.disciplina.professor.nome);


    printf("========DADOS==========\n");
    printf("Matricula: %d\nNome: %s\nCodigo disciplina: %d\nNome disciplina: %s\n",
        aluno.matricula, aluno.nome, aluno.disciplina.codigo, aluno.disciplina.nome);
    printf("CPF professor: %ld\nNome professor: %s\n",
        aluno.disciplina.professor.cpf, aluno.disciplina.professor.nome);

    return 0;
}