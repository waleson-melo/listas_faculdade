/*
Questão 11. Faça um algoritmo que receba um número e verifique se ele é igual a 5, a 200, a 400, se está no
intervalo entre 500 e 1000, ou se está fora dos escopos anteriores. No final, imprima o resultado.
*/
#include <stdio.h>
int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num == 5 || num == 200 || num == 400){
        printf("o numero pode ser igual a 5, 200 e 400\n");
    } else{
        if(num > 500 && num < 1000){
            printf("o numero esta entre 500 e 1000\n");
        } else{
            printf("o numero esta fora dos escopos\n");
        }
    }

    return 0;
}