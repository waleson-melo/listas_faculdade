#include<stdio.h>

#define T 5     // Tamanho do vetor de aluno

typedef struct aluno{
    char nome[50], matricula[11], curso[40];
}Aluno;

int main()
{
    Aluno aluno[T];
    int i;

    // Inserindo aluno
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