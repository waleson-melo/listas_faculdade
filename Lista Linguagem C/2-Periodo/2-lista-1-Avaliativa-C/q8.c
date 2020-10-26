#include<stdio.h>
#include<stdlib.h>
#define T 3

int main()
{
    int A[T], B[T], C[T], i, j = 0, k = 0;
    // Preenchendo e mostrando o vetor
    printf("\nA: ");
    for(i = 0; i < T; i++){
        A[i] = rand() % 100;
        printf("%d\t", A[i]);
    }
    // Preenchendo os vetores B e C com os numeros pares e inpares respectivamente
    for(i = 0; i < T; i++){
        if(A[i] % 2 == 0){
            B[j] = A[i];
            j++;
        } else{
            C[k] = A[i];
            k++;
        }
    }
    // Mostrando os vetores B
    printf("\nB: ");
    for(i = 0; i < j; i++){
        printf("%d\t", B[i]);
    }
    // Mostrando os vetores C
    printf("\nC: ");
    for(i = 0; i < k; i++){
        printf("%d\t", C[i]);
    }
}