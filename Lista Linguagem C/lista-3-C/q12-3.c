/* Questão 12. Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o desconto no INSS, de
acordo com a tabela a seguir:
Menor ou igual a R$ 600,00 isento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
Maior que R$ 2000,00 30% */
#include <stdio.h>
int main(){
    float salario, inss;

    printf("salario :");
    scanf("%f", &salario);

    if(salario <= 600){
        printf("isento\n");
    } else{
        if(salario > 600 && salario <= 1200){
            inss = salario * 0.20;
            printf("desconto innss: %.2f", inss);
        } else{
            if(salario > 1200 && salario <= 2000){
                inss = salario * 0.25;
                printf("desconto inss: %.2f", inss);
            } else{
                inss = salario * 0.30;
                printf("desconto inss: %.2f", inss);
            }
        }
    }

    return 0;
}