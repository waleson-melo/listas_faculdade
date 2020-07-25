/*
Questão 3. Uma companhia de carros paga a seus empregados um salário de R$ 500,00 por mês mais uma
comissão de R$ 50,00 para cada carro vendido e mais 5% do valor da venda. Elabore um algoritmo para calcular e
imprimir o salário do vendedor num dado mês recebendo como dados de entrada o nome do vendedor, o número de
carros vendidos e o valor total das vendas.
*/
#include <stdio.h>
int main(){
    float salario, comissao, valor_total_vendas, porcentagem_venda;
    int num_carros_vendidos;
    char nome[30];

    printf("nome vendedor: ");
    scanf("%s", &nome);
    printf("numero de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);
    printf("valor total das vendas: ");
    scanf("%f", &valor_total_vendas);

    comissao = num_carros_vendidos * 50;
    porcentagem_venda = valor_total_vendas * 0.05;
    salario = comissao + porcentagem_venda + 500;

    printf("salario funcionario: %.2f", salario);

    return 0;
}