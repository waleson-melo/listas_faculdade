#include<stdio.h>
#include<stdlib.h>
#define T 6

int main(){
    int vet[T], i, j, aux, k;

    // Preenchendo o vetor
    for(i = 0; i < T; i++){
        vet[i] = 1 + rand() % 100;
        printf("%d\t", vet[i]);
    }
    // Ordenando
    for(i = 0; i < T; i++){
        for(j = i + 1; j < T; j++){
            if(vet[j] < vet[i]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    // Mostrando o vetor ja ordenado
    printf("\n");
    for(i = 0; i < T; i++)
        printf("%d\t", vet[i]);

}