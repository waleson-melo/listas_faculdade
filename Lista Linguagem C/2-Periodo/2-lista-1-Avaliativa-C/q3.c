#include<stdio.h>
#include<stdlib.h>
#define T 5
int main(){
    int X[T], Y[T], Z[T], i;
    // Preenchendo e mostrando o vetor X e Y
    printf("X:\tY:\n");
    for(i = 0; i < T; i++){
        X[i] = 1 + rand() % 100;
        Y[i] = 1 + rand() % 100;
        printf("%d\t%d\n", X[i], Y[i]);
    }
    // Calculando e atribuindo os valores ao vetor Z  -
    for(i = 0; i < T; i++)
        Z[i] = X[i] - Y[i];
    // Mostrando o vetor Z
    printf("\nX - Y:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", Z[i]);
    // Calculando e atribuindo os valores ao vetor Z  +
    for(i = 0; i < T; i++)
        Z[i] = X[i] + Y[i];
    // Mostrando o vetor Z
    printf("\nX + Y:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", Z[i]);

    // Calculando e atribuindo os valores ao vetor Z  *
    for(i = 0; i < T; i++)
        Z[i] = X[i] * Y[i];

    // Mostrando o vetor Z
    printf("\nX * Y:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", Z[i]);
}