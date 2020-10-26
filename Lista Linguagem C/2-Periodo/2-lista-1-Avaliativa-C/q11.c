#include<stdio.h>
#include<stdlib.h>
#define T 100
int main(){
    int vet[T], i, maior, menor, posm, posmi;
    // Preenchendo o vetor
    for(i = 0; i < T; i++){
        vet[i] = rand() % 100;
        printf("%d\t", vet[i]);
    }
    maior = vet[0];
    menor = vet[0];
    // Procurando o maior e o menor numero
    for(i = 1; i < T; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posm = i;
        }
        if(vet[i] < menor){
            menor = vet[i];
            posmi = i;
        }
    }
    printf("\nO maior valor: %d Posicao: %d\nO menor valor: %d 
        Posicao: %d\n", maior, posM, menor, PosMi);
}