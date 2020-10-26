#include <stdio.h>
#include <stdlib.h>

#define T 50

int main()
{
    int vet[T], numPar = 0, i;

    // Preenchendo e mostrando o vetor vet
    for (i = 0; i < T; i++){
        vet[i] = 1 + rand() % 100;
        printf("%d\t", vet[i]);
    }

    // Fazendo a contagem de numeros pares dentro do vetor vet
    for (i = 0; i < T; i++)
        if (vet[i] % 2 == 0)
            numPar += 1;

    printf("\nQuantidades de numeros pares: %d\n", numPar);
}