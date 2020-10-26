/* Questão 6. Crie um algoritmo que receba um número e imprima uma mensagem se for divisível por 3 e por 7. */
#include <stdio.h>
int main(){
    int num;

    printf("num: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 7 == 0){
        printf("divisivel por 3 e 7\n");
    } else{
        printf("nao divisivel por 3 e 7");
    }

    return 0;
}