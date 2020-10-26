#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 4
int main(){
    int M[T][T], i, j, soma = 0, cont = 0;
    char op;
    float media;
    printf("0\t1\t2\n");
    printf("--------------------------\n");
    for(i = 0; i < T; i++){
        for(j = 0; j < T; j++) {
            M[i][j]  =  1 + rand() % 100;
            printf("%d\t ", M[i][j]);
        }
        printf("\n");
    }

    setbuf(stdin, NULL);
    printf("Escolha o opcao(S-Soma ou M-Media): ");
    scanf("%c", &op);

    switch(op){
        case 'S':
            for(i = 0; i < T; i++)
                for(j = 0; j < T; j++)
                    if(i < j)
                        soma += M[i][j];
            printf("A soma dos valores acima da diagonal principal é: %d\n", soma);
            break;
        case 'M':
            for(i = 0; i < T; i++)
                for(j = 0; j < T; j++)
                    if(i < j){
                        soma += M[i][j];
                        cont++;
                    }
            media = soma / cont;
            printf("A media dos coluna é: %f\n", media);
            break;
        default:
            printf("Operacao invalida\n");
            break;
    }
}