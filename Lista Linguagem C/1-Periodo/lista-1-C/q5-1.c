/* Questão 5. Crie um algoritmo que efetue o cálculo do salário líquido de um professor. Os dados
fornecidos serão: valor da hora aula (horaAula), número de aulas dadas (numeroDeAulas) no mês e
percentual de desconto (percDesconto)no INSS. Calcule e mostre o salário líquido (salarioLiquido)
do professor. */
#include <stdio.h>
int main(){
    float salarioL, horaAula, percDesconto;
    int numeroDeAulas;

    printf("valor da hora: ");
    scanf("%f", &horaAula);
    printf("numero de aulas: ");
    scanf("%d", &numeroDeAulas);
    printf("percentual de desconto: ");
    scanf("%f", &percDesconto);

    salarioL = horaAula * numeroDeAulas - ((horaAula * numeroDeAulas) * percDesconto)/100;

    printf("salario liquido: %.2f\n", salarioL);
    
    return 0;
}