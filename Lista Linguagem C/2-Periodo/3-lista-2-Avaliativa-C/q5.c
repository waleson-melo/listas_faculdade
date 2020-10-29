#include<stdio.h>

#define T 5     // Tamanho do Vetor de Aluno
#define QN 3    // Quantidade de Notas de Trabalhos e Provas
#define NA 6    // Nota de Aprovaçao

typedef struct aluno{
    char matricula[11], nome[50];
    float nota[QN];
}Aluno;

int main()
{
    Aluno aluno[T];
    int i, j, posAluno = 0;     // posAluno salva a posiçao no vetor onde um determinado aluno está
    float maior, menor, soma = 0, media;

    for(i = 0; i < T; i++){
        printf("Matricula: ");
        scanf("%[^\n]s", aluno[i].matricula);
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", aluno[i].nome);
        setbuf(stdin, NULL);

        // Preenchendo o vetor de notas do registro do aluno
        for(j = 0; j < QN; j++){
            printf("Nota-%d: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);
        }
        setbuf(stdin, NULL);
        printf("-------------------------------\n");
    }

    // Maior nota da primeira prova
    maior = aluno[0].nota[0];
    for(i = 1; i < T; i++){
        if(maior < aluno[i].nota[0]){
            maior = aluno[i].nota[0];
            posAluno = i;
        }
    }
    printf("O aluno %s tem a maior nota na primeira prova, %0.2f\n", aluno[posAluno].nome, maior);
    printf("-------------------------------\n");

    // Maio media final
    maior = 0;
    for(i = 0; i < T; i++){
        for(j = 0; j < QN; j++){
            soma += aluno[i].nota[j];
        }
        media = soma / QN;
        if(media > maior){
            maior = media;
            posAluno = i;
        }
        media = 0;
        soma = 0;
    }
    printf("O aluno %s tem a maior media final, %0.2f\n", aluno[posAluno].nome, maior);
    printf("-------------------------------\n");

    // Menor media final
    menor = maior;
    for(i = 0; i < T; i++){
        for(j = 0; j < QN; j++){
            soma += aluno[i].nota[j];
        }
        media = soma / QN;
        if(media < menor){
            menor = media;
            posAluno = i;
        }
        media = 0;
        soma = 0;
    }
    printf("O aluno %s tem a menor media final, %0.2f\n", aluno[posAluno].nome, menor);
    printf("-------------------------------\n");

    // Alunos aprovados e reprovados
    printf("=======Situacao do Aluno=======\n");
    for(i = 0; i < T; i++){
        soma = 0;
        printf("Nome: %s\nSituacao: ", aluno[i].nome);
        for(j = 0; j < QN; j++){
            soma += aluno[i].nota[j];
        }
        media = soma / QN;
        if(media >= NA){
            printf("APROVADO\n");
        } else{
            printf("REPROVADO\n");
        }
        printf("-------------------------------\n");
    }

    return 0;
}