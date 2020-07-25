/*
Questão 1. Todo restaurante, embora por não possa obrigar o cliente a pagar, cobra 10% para o garçom. Crie um
algoritmo que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor total da gorjeta.
*/
#include <stdio.h>
int main(){
    int despesas, valor_gorjeta;

    printf("digite o valor gasto com despesas: ");
    scanf("%d", &despesas);

    valor_gorjeta = despesas * 0.10;

    printf("gorgeta do garcom: %d\n", valor_gorjeta);

    return 0;
}