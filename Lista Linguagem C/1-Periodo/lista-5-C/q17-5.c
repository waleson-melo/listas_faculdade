/* Questão 17. A conversão de graus Farenheit para Centígrados é obtida por C = (5-9)*(F-32). Faça um
programa que calcule e escreva uma tabela de centígrados em função de graus Farenheit, que variam de 50 a
150 de 1 em 1. */
#include <stdio.h>
int main(){
    int i;
    float c;

    for(i = 50;i < 150 + 1;i++){
        c = (5 - 9) * (i - 32); 
    }
    printf("%f---------%d",c,i);

    return 0;
}