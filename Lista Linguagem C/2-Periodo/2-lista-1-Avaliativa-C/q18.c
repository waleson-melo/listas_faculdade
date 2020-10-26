#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 12
int main(){
    int M[T][T], i, j, soma = 0, numCol;
    char op;
    float media;
    printf("0\t1\t2\n");
    printf("--------------------------\n");
    for(i = 0; i < T; i++){
        for(j = 0; j < T; j++) {
            M[i][j]  =  rand() % 100;
            printf("%d\t ", M[i][j]);
        }
        printf("\n");
    }
 
    printf("Numero da coluna: ");
    scanf("%d",&numCol);
    setbuf(stdin, NULL);
    printf("Escolha o opcao(S-Soma ou M-Media): ");
    scanf("%c", &op);

    switch(op){
        case 'S':
            for(i = 0; i < T; i++){
                soma += M[i][numCol];
            }
            printf("A soma da coluna é: %d\n", soma);
            break;
        case 'M':
            for(i = 0; i < T; i++){
                soma += M[i][numCol];
            }
            media = soma / T;
            printf("A media da coluna é: %f\n", media);
            break;
        default:
            printf("Operacao invalida\n");
            break;
    }
}