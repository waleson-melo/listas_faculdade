/* Questão 1. Faça um algoritmo que imprima todos os números pares compreendidos entre 85 e 907. O
algoritmo deve também calcular e mostrar a soma destes valores. */
#include <stdio.h>
int main(){
    int soma = 0,i;

    for(i=85;i < 908;i++){
        soma = soma + i;
        if(i % 2 == 0){
            printf("%d\n",i);
        }
        
    }
    printf("soma total dos numeros: ",soma);

    return 0;
}
