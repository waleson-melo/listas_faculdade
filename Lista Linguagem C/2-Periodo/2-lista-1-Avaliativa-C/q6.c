#include<stdio.h>

#define T 200

int main(){
    int A[T], B[T], aux, i, j = T - 1;

    // Preenchendo os vetores
    for(i = 0; i < T; i++){
        printf("Digite o valor de A e depois de B:\n");
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
    }
    printf("--------Vetor Antes----------\n");
    printf("A:\tB:\n");
    for(i = 0; i < T; i++)
        printf("%d\t%d\n", A[i], B[i]);

    for(i = 0; i < T; i++){
        aux = A[i];
        A[i] = B[j];
        B[j] = aux;
        j--;
    }
    printf("-------Vetor Depois----------\n");
    printf("A:\tB:\n");
    for(i = 0; i < T; i++)
        printf("%d\t%d\n", A[i], B[i]);
}