#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, soma = 0;
    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &n);
    int X[n], Y[n];
    for(i = 0; i < n; i++){
        X[i] = 1 + rand() % 100;
        Y[i] = 1 + rand() % 100;
        printf("%d\t%d\n", X[i], Y[i]);
    }
    for(i = 0; i < n; i++)
        soma += X[i] * Y[i];
    printf("%d\n", soma);
}