/* Questão 2. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a porcentagem do distribuidor seja de
12% e a dos impostos de 45%, prepare um algoritmo para ler o custo de fábrica do carro e imprimir o custo ao
consumidor. */
#include <stdio.h>
int main(){
    float custoFabrica, imposto, distribuidor, custoFinal;

    printf("custo de fabrica: ");
    scanf("%f", &custoFabrica);

    imposto = custoFabrica * 0.45;
    distribuidor = custoFabrica * 0.12;
    custoFinal = custoFabrica + imposto + distribuidor;

    printf("custo final: %.2f", custoFinal);

    return 0;
}