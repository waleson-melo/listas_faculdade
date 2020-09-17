/*
    Questão 3. Crie um programa que preencha um vetor de 50 posições, depois multiplique cada
valor do vetor por um valor inteiro lido do usuario, mantendo os novos valores no mesmo vetor. Mostre o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

#define T 50

int main()
{
    int vet[T], i, num;

    // Preenchendo o vetor com valores aleatorios
    for(i = 0; i < T; i++)
        vet[i] = rand() % 100;

    // Mostrando os valores do vetor
    printf("Valores do Vetor:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", vet[i]);

    // Multiplicando os valores do vetor pelo numero digitado pelo usuario
    printf("\nPor quanto voce deseja multiplicar os valores do vetor?\t");
    scanf("%d", &num);
    
    for(i = 0; i < T; i++)
        vet[i] = vet[i] * num;

    // Mostrando os novos valores
    printf("Novos valores do vetor:\n");
    for(i = 0; i < T; i++)
        printf("%d\t", vet[i]);
}