/*
Questão 1. Crie um algoritmo que receba três números inteiros e imprima-os em ordem crescente,
utilizando a seleção encadeada (aninhada).
*/
#include <stdio.h>
int main(){
    int a, b, c;

    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digite o segundo numero: ");
    scanf("%d", &b);
    printf("digite o terceiro numero: ");
    scanf("%d", &c);

    if(a < b && a < c){
        if(b < c){
            printf("%d %d %d\n", a, b, c);
        } else{
            printf("%d %d %d\n", a, c, b);
        }
    } else{
        if(b < a && b < c){
            if(a < c){
                printf("%d %d %d\n", b, a, c);
            } else{
                printf("%d %d %d\n", b, c, a);
            }
        } else{
            if(c < a && c < b){
                if(a < b){
                     printf("%d %d %d\n", c, a, b);
                } else{
                     printf("%d %d %d\n", c, b, a);
                }
            }
        }
    }

    return 0;
}