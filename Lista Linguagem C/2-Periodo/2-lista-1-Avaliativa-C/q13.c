#include<stdio.h>
#include<stdlib.h>
#define T 30
int main(){
    int A[T], B[T], k, i;
    // Preenchendo o vetor
    printf("A:\n");
    for(i = 0; i < T; i++){
        A[i] = rand() % 100;
        printf("%d\t", A[i]);
    }
    printf("\nDigite um valor: ");
    scanf("%d", &k);
    // Multiplicando o vetor pelo numero do usuario
    for(i = 0; i < T; i++){
        B[i] = k * A[i];
    }
    // Mostrando o vetor
    printf("B:\n");
    for(i = 0; i < T; i++){
        printf("%d\t", B[i]);
    }
}