/* Questão 3. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão calculada
de acordo com o valor de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 a
comissão será de 12% do valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de cada um dos
corretores. O relatório deve mostrar também o total de vendas da empresa. */
#include <stdio.h>
int main(){
    int i;
    char nome[20];
    float valorVenda,comissao,total = 0;

    for(i = 0;i<3;i++){
        fflush(stdin);
        printf("-------------------------------------\n");
        printf("nome: ");
        scanf("%s", &nome);
        printf("valor da venda: ");
        scanf("%f", &valorVenda);
        total = total + valorVenda;
        printf("------------------\n");

        if(valorVenda > 50000){
            comissao = (valorVenda * 12) / 100;
            printf("nome: %s\nvalor venda: %.2f\ncomissao: %.2f\n", nome, valorVenda, comissao);
        } else{
            if(valorVenda >= 30000 && valorVenda <= 50000){
                comissao = (valorVenda * 9.5) / 100;
                printf("nome: %s\nvalor venda: %.2f\ncomissao: %.2f\n", nome, valorVenda, comissao);
            } else{
                    comissao = (valorVenda * 7) / 100;
                    printf("nome: %s\nvalor venda: %.2f\ncomissao: %.2f\n", nome, valorVenda, comissao);
                }
            }
        }
    printf("Total de vendas da empresa: %.2f",total);

    return 0;
}