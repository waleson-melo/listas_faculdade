/* Questão 14. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de operação
a ser realizada (depósito ou retirada) e o valor da operação. Após, determine e mostre o novo saldo. Se o novo
saldo ficar negativo, deve ser mostrada, também, a mensagem “conta estourada”. */
#include <stdio.h>
int main(){
    char numeroConta[10];
    int op;
    float saldo, deposito, saque, novoSaldo = 0;

    printf("numero da conta: ");
    scanf("%s", &numeroConta);
    printf("saldo: ");
    scanf("%f", &saldo);
    printf("operacao (d-deposito, s-saque): ");
    scanf("%s", &op);

    switch(op){
        case 'd':
            printf("qual o valor de deposito: ");
            scanf("%f", &deposito);
            novoSaldo = saldo + deposito;
            break;
        case 's':
            printf("qual o valor de saque: ");
            scanf("%f", &saque);
            novoSaldo = saldo - saque;
            break;
        default:
            printf("operacao invalida\n");
    }
    if(novoSaldo >= 0){
        printf("seu saldo eh: %.2f\n", novoSaldo);
    } else{
        printf("conta estourada\n");
    }

    return 0;
}