/*
    Questão 5. Crie um programa que preencha dois vetores A e B. Crie um terceiro vetor para
armazenar a soma dos valores de A com os valores de B. Mostre o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

#define T 10

int main()
{
    int A[T], B[T], result[T], i;

    // Preenchendo o vetor A
    for(i = 0; i < T; i++)
        A[i] = rand() % 100;

    // Mostrando o vetor A
    printf("Vetor A:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", A[i]);

    // Preenchedo o vetor B
    for(i = 0; i < T; i++)
        B[i] = rand() % 100;
    
    // Mostrando o vetor B
    printf("\nVetor B:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", B[i]);

    // Somando os valores de A e B
    for(i = 0; i < T; i++)
        result[i] = A[i] + B[i];

    // Mostrando o vetor do resultado
    printf("\nResulatdo da soma:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", result[i]);
}