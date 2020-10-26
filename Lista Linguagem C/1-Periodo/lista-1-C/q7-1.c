/* Questão 7. Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de
comissão sobre suas vendas efetuadas, calcule e mostre o total a receber no final do mês. A
entrada deve conter um texto (primeiro nome do vendedor) e 2 valores com casas decimais,
representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor,
respectivamente. */
#include <stdio.h>
int main(){
    char nome[20];
    float salarioF, totalV, comissao, valorF;

    fflush(stdin);
    printf("nome do vendedor: ");
    scanf("%s", &nome);
    printf("salario fixo: ");
    scanf("%f", &salarioF);
    printf("total de vendas: ");
    scanf("%f", &totalV);

    comissao = totalV * 0.15;
    valorF = salarioF + comissao;

    printf("nome: %s\nsalario: %.2f\ntotal de vendas: %.2f\n", nome, valorF, totalV);

    return 0;
}