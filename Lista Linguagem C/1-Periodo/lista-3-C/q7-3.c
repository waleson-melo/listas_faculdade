/*
Questão 7. Crie um algoritmo que receba um número e imprima uma mensagem se for múltiplo de 4 e 8 ou de 6 e
9.
*/
#include <stdio.h>
int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num % 4 == 0 && num % 8 == 0){
        printf("numero divisivel por 4 e 8\n");
    } else{
        if(num % 6 == 0 && num % 9 == 0){
            printf("numero divisivel por 6 e 9\n");
        }
    }

    return 0;
}