/* Questão 1. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a velocidade em
m/s (metros por segundo). */
#include <stdio.h>
int main(){
    float vkmh,vms;

    printf("velocidade em km/h: ");
    scanf("%f", &vkmh);
    vms = vkmh * 3.6;

    printf("velocidade em m/s: %.2f\n",vms);

    return 0;
}