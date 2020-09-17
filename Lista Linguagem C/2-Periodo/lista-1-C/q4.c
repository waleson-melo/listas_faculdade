/*
    Questão 4. Preencha um array com 50 elementos utilizando a função rand( ). Verifique o maior
elemento presente no vetor. Mostre o valor e a posição do maior elemento.
*/

#include<stdio.h>
#include<stdlib.h>

#define T 50

int main()
{
    int vet[T], i, biggest, position;

    // Preenchendo o vetor com numeros aleatorios
    for(i = 0; i < T; i++)
        vet[i] = rand() % 100;
    
    // Mostrando os valores do vetor
    for(i = 0; i < T; i++)
        printf("%d\t", vet[i]);

    // Definindo um valor para o biggest
    biggest = vet[0];

    // Verificando o maior numero e sua posicao
    for(i = 0; i < T; i++)
        if(vet[i] > biggest){
            biggest = vet[i];
            position = i;
        }

    printf("\nO maior numero eh: %d\nPosicao do maior numero: %d\n", biggest, position);
}