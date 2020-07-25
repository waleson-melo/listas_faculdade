/* Questão 2. Crie um algoritmo que receba o salário base de um funcionário e armazene-o em uma
variável. Em seguida, calcule e mostre o salário a receber, sabendo-se que o funcionário tem
gratificação de 5% sobre o salário base e paga imposto de 8% sobre este salário. Cria uma nova
variável para guardar o valor do salário a receber pelo funcionário. */
#include <stdio.h>
int main(){
    float salarioB, salarioF, gratificacao, imposto;

    printf("salario base: ");
    scanf("%f", &salarioB);

    gratificacao = salarioB * 0.05;
    imposto = salarioB * 0.08;

    salarioF = salarioB + gratificacao - imposto;

    printf("salario final: %.2f\n", salarioF);

    return 0;
}