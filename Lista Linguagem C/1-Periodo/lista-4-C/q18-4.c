/* Questão 18. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem
compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o
custo total da compra. */
#include <stdio.h>
int main(){
    int numMaca;
    float valor;

    printf("Numero de macas: ");
    scanf("%d", &numMaca);

    if(numMaca < 12){
        valor = numMaca * 1.30;
    } else{
        if(numMaca >= 12){
            valor = numMaca * 1;
        }
    }
    printf("valor da compra: %.2f\n", valor)
;
    return 0;
}