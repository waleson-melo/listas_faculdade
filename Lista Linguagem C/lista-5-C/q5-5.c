/* Questão 5. Escreva um algoritmo que leia um número e diga se este número é perfeito ou não. Um número
perfeito é aquele que é igual à soma de seus divisores, excluindo o próprio número.
Exemplos:
1 + 2 + 3 = 6;
1 + 2 + 4 + 7 = 28. */
#include <stdio.h>
int main(){
    int num, i, somaDivisor = 0;

    printf("digite um numero: ");
    scanf("%d", &num);

    for(i=1;i<num;i++){
        if(num % i == 0){
            somaDivisor = somaDivisor + i;
        }
    }
    if(somaDivisor == num){
        printf("numero perfeito\n");
    } else{
        printf("numero nao perfeito\n");
    }

    return 0;
}
