#include<stdio.h>
#include<string.h>

#define T 2

typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}Livro;

int main()
{
    Livro livro[T];
    char pesq[30];
    int i, nb = 0;

    for(i = 0; i < T; i++){
        printf("Titulo: ");
        scanf("%[^\n]s", livro[i].titulo);
        setbuf(stdin, NULL);
        printf("Autor: ");
        scanf("%[^\n]s", livro[i].autor);
        setbuf(stdin, NULL);
        printf("Ano: ");
        scanf("%d", &livro[i].ano);
        setbuf(stdin, NULL);
        printf("-----------------------\n");
    }

    // Pegando a pesquisa do usuario
    printf("Nome do livro para pesquisa: ");
    scanf("%[^\n]s", pesq);

    printf("=============LIVROS==============\n");
    for(i = 0; i < T; i++){
        if(strcmp(pesq,livro[i].titulo) == 0){
            nb++;
            printf("Titulo: %s\nAutor: %s\nAno: %d\n", livro[i].titulo, livro[i].autor, livro[i].ano);
            printf("-----------------------\n");
        }
    }
    if(nb == 0)
        printf("Nada encontrado\n");

    return 0;
}