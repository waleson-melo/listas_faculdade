/* Questão 14. Faça um algoritmo que receba um número entre 1 e 12 e imprima o mês correspondente ao valor
recebido. Caso o usuário digite um número fora desse intervalo, mostre uma mensagem informando que não há mês
com este número. */
#include <stdio.h>
int main(){
    int num;

    printf("numero: ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Marco\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Outubro\n");
            break;
        case 10:
            printf("Setembro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Desembro\n");
            break;
        default:
            printf(("nao ha mes com esse numero\n"));
            break;
    }

    return 0;
}