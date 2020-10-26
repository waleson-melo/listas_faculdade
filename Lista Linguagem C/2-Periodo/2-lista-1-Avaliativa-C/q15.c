#include<stdio.h>
#include<stdlib.h>
#define T 6
int main(){
    int vet[T], cont = 0, i, j = T - 1;
    // Preenchendo e mostrando o vetor
    for(i = 0; i < T; i++){
        printf("Digite um numero: \n");
        scanf("%d", &vet[i]);
    }

    // Verificando se é um palindromo
    for(i = 0; i < T / 2; i++){
        if(vet[i] != vet[j]){
            i = T;
        } else{
            cont++;
        }

        j--;
    }
    if(cont == T / 2)
        printf("\nEh um palindromo\n");
    else
        printf("\nNao eh um palindromo\n");

}