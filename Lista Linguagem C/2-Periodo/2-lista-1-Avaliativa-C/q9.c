#include<stdio.h>
#define T 6
int main(){
    int vet[T], num, aux, i, j = T - 1;
    // Preenchendo o vetor
    for(i = 0; i < T; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        vet[i] = num;
    }
    // Mostrando o vetor 
    printf("Vetor: \n");
    for(i = 0; i < T; i++){
        printf("%d\n", vet[i]);
    }
    printf("Vetor com os valores trocados\n");
    // Trocando as posiçoes dos valores
    for(i = 0; i < T / 2; i++){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        j--;
    }
    // Mostrando o vetor 
    for(i = 0; i < T; i++){
        printf("%d\n", vet[i]);
    }

}