/* Questão 6. A Prefeitura de Manaus abriu uma linha de crédito para os funcionários estatutários. O
valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Crie um algoritmo que
receba o o salário bruto, o valor do empréstimo, a quantidade de parcelas e imprima se o
empréstimo pode ser concedido ou não. */
#include <stdio.h>
int main(){
    float salarioB, emprestimo, prestacao, tetoP;
    int parcelas;

    printf("salario: ");
    scanf("%f", &salarioB);
    printf("emprestimo: ");
    scanf("%f", &emprestimo);
    printf("parcelas: ");
    scanf("%d", &parcelas);

    prestacao = emprestimo / parcelas;
    tetoP = salarioB * 0.30;

    if(prestacao > tetoP){
        printf("emprestimo negado\n");
    } else{
        printf("emprestimo concedido\n");
    }

    return 0;
}