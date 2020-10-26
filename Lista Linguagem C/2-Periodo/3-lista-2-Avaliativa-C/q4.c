#include<stdio.h>

#define T 5

typedef struct{
    char nome[50];
    char matricula[11];
    char curso[50];
}Aluno;

int main()
{
    Aluno aluno[T];
    int i;

    for(i = 0; i < T; i++){
        printf("Nome: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);
        printf("Matricula: ");
        scanf("%[^\n]s", aluno[i].matricula);
        setbuf(stdin, NULL);
        printf("Curso: ");
        scanf("%[^\n]s", aluno[i].curso);
        setbuf(stdin, NULL);
        printf("-----------------------------\n");
    }

    printf("===============Alunos=============\n");

    for(i = 0; i < T; i++){
        printf("Nome: %s\nMatricula: %s\nCurso: %s\n", aluno[i].nome, aluno[i].matricula, aluno[i].curso);
        printf("-------------------------------\n");
    }

    return 0;
}