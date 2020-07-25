/* Questão 2. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador
como contribuição à previdência social. Após esse desconto, há um outro desconto de 5% sobre o valor restante
do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão
e imprima o seu salário líquido. */
#include <stdio.h>
int main(){
    float salarioBruto,salarioDP, descontoP, descontoI, salarioLiquido;

    printf("salario bruto: ");
    scanf("%f", &salarioBruto);

    descontoP = salarioBruto * 0.1;
    salarioDP = salarioBruto - descontoP;
    descontoI = salarioDP * 0.05;
    salarioLiquido = salarioDP - descontoI;

    printf("salario liquido: %f\n", salarioLiquido);

    return 0;
}