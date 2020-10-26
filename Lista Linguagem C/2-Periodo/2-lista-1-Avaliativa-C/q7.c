#include <stdio.h>
#include <stdlib.h>

#define T 30

int main()
{
    int i, j, A[T], B[T], soma = 0, aux;

    for (i = 0; i < T; i++){
        A[i] = 1 + rand() % 15;
        printf("%d\t", A[i]);
    }

    for (i = 0; i < T; i++){
        B[i] = A[i];
    }

    for(i = 0; i < T; i++){
        for(j = i + 1; j < T; j++){
            if(B[j] < B[i]){
                aux = B[i];
                B[i] = B[j];
                B[j] = aux;
            }
        }
    }
    printf("\nVetor ordenado:\n");
    for (i = 0; i < T; i++){
        printf("%d\t", B[i]);
    }
}