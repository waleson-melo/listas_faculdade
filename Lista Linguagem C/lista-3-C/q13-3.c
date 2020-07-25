/*
Questão 13. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra
form menor que R$ 20,00; caso contrário, o lucro será de 30%. entrar com o valor do produto e imprimir o valor da
venda.
*/
#include <stdio.h>
int main(){
    float valor_produto, valor_final;

    printf("valor do produto: ");
    scanf("%f", &valor_produto);

    if(valor_produto < 20){
        valor_final = valor_produto + (valor_produto * 40) / 100;
        printf("valor de venda: %.2f", valor_final);
    } else{
        valor_final = valor_produto + (valor_produto * 30) / 100;
        printf("valor de venda: %.2f", valor_final);
    }

    return 0;
}