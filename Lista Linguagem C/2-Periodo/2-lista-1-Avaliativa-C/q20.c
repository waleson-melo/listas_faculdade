#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 3
int main(){
    int mat[L][C], i, j, k, l, cont = 0;
    for(i = 0; i < L; i++)
        for(j = 0; j < C; j++)
            mat[i][j] = 1 + rand() % 12;
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
    for(i = 0; i < L; i++)
        for(j = 0; j < C; j++){
            for(k = 0; k < L; k++)
                for(l = 0; l < C; l++)
                    if(i != k && j != l)
                        if(mat[i][j] == mat[k][l])
                            cont++;
            printf("O numero %d se repete %d vezes\n", mat[i][j], cont);
            cont = 0;
        }
}