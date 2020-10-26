/*
Questão 5. Crie um algoritmo que receba um número e informe se ele é divisível por 5 ou não.
*/
#include <stdio.h>
int main(){
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0){
        printf("numero divisivel por 5\n");
    } else{
        printf("numero nao divisivel por 5\n");
    }

    return 0;
}