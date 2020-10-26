/*
    Questão 2. Crie um programa preencha um vetor de 10 posições, depois calcule e mostre a soma
dos elementos do vetor.
*/

#include<stdio.h>
#include<stdlib.h>

#define T 10

int main()
{
    int vet[T], i, soma = 0;

    // Preenchendo o vetor com numeros aleatorios
    for(i = 0; i < T; i++)
        vet[i] = rand() % 100;

    // Somando todos os valores do vetor
    for(i = 0; i < T; i++)
        soma = soma + vet[i];

    printf("%d\n", soma);
}