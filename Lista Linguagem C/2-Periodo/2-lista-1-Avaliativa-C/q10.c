#include <stdio.h>

int main(){
    int A[10], aux, i, j = 10 - 1;
    // Preenchendo o vetor
    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }
    // Mostrando o vetor
    printf("Vetor: \n");
    for (i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }
    printf("Vetor com os valores trocados\n");
    // Trocando as posiçoes dos valores
    for (i = 0; i < 10 / 2; i++){
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
        j--;
    }
    // Mostrando o vetor
    for (i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }
}