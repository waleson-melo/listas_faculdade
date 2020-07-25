/* Questão 11. Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
comprar, sabendo que a decisão é sempre pelo mais barato. */
#include <stdio.h>
int main(){
    float prod1, prod2, prod3, maisBarato;

    printf("produto: ");
    scanf("%f", &prod1);
    printf("produto: ");
    scanf("%f", &prod2);
    printf("produto: ");
    scanf("%f", &prod3);

    maisBarato = prod1;

    if(maisBarato > prod2){
        maisBarato = prod2;
    }
    if(maisBarato > prod3){
        maisBarato = prod3;
    }
    printf("Produto mais barato: %.2f", maisBarato);

    return 0;
}