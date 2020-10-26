#include<stdio.h>
#include<stdlib.h>

#define T 10

int main()
{
    int A[T], B[T], C[T], i;

    printf("A:\tB:\n");
    for(i = 0; i < T; i++){
        A[i] = rand() % 100;
        B[i] = rand() % 100;
        printf("%d\t%d\n", A[i], B[i]);
    }

    for(i = 0; i < T; i++){
        C[i] = A[i] * B[i];
    }

    printf("Resultado:\n");
    for(i = 0; i < T; i++){
        printf("%d\n", C[i]);
    }

}