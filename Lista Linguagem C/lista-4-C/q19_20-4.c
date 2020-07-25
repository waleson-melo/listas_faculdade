/* Questão 19. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool{
    até 20 litros, desconto de 3% por litro
    acima de 20 litros, desconto de 5% por litro
}

Gasolina{
    até 20 litros, desconto de 4% por litro
    acima de 20 litros, desconto de 6% por litro
}
Questão 20. Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da
seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço
do litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90. */
#include <stdio.h>
int main(){
    char op;
    float litros, valor;

    printf("quantidade em litros: ");
    scanf("%f", &litros);
    printf("qual o combustivel (A-alcool, G-gasolina): ");
    scanf("%s", &op);
    
    switch (op){
    case 'A':
        valor = litros * 2.90;
        break;
    case 'G':
        valor = litros * 3.30;
        break;
    
    default:
        printf("opcao invalida\n");
        break;
    }

    return 0;
}