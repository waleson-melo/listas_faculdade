/* Questão 3. Crie um algoritmo que receba o salário de um funcionário (variável salario) e o
percentual de aumento (variável perc). Calcule e mostre o valor do aumento e o novo salário
(variável novoSalario). */
#include <stdio.h>
int main(){
    float salario, perc, novoSalario;

    printf("salario: ");
    scanf("%f", &salario);
    printf("percentua de aumento: ");
    scanf("%f", &perc);

    novoSalario = salario + (salario * perc)/100;

    printf("novo salario: %.2f\n", novoSalario);

    return 0;
}