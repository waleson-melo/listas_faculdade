#include<stdio.h>
#include<stdlib.h>

#define T 50

int main()
{
    int A[T], B[T], i, j = T - 1, somaTotal = 0;

    // Preencher os dois vetores
    for(i = 0; i < T; i++){
        A[i] = 1 + rand() % 100;
        B[i] = 1 + rand() % 100;
    }

    // Mostrar os dois vetores
    printf("A:\tB:\n");
    for(i = 0; i < T; i++){
       printf("%d\t%d\n", A[i], B[i]);
    }

    printf("-----------------------\n");

    for(i = 0; i < T; i++){
        somaTotal += A[i] - B[j];
        j--;
    }

    printf("Soma das diferencas: %d\n", somaTotal);

}