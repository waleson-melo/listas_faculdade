/* 
    Questão 1. Crie um programa que preenche um vetor de inteiros de 100 números, colocando 0 nas
posições par e 1 ímpar. Utilize para o tamanho do vetor, uma variável ou uma constante pelo
#define.
*/

#include <stdio.h>

#define T 100

int main()
{
    int vet[T], i;

    // Preenche o vetor com 0 se o indice for par ou com 1 se indice for impar
    for(i = 0; i < T; i++)
        if(i % 2 == 0)
            vet[i] = 0;
        else
            vet[i] = 1;

    for(i = 0; i < T; i++)
        printf("%d\t", vet[i]);
}