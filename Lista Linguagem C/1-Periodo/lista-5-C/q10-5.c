/* Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário e devolvendo a média, o salário mais alto e o salário
mais baixo. */
#include <stdio.h>
int main(){
    float media, salario, salarioAlto = 0, salarioBaixo = 99999999999, soma = 0;
    int quantidade, i;

    printf("quantidade de funcionarios: ");
    scanf("%d", &quantidade);

    for(i=1;i<quantidade + 1;i++){
        printf("valor do salario do %d funcionario: ", i);
        scanf("%f", &salario);

        soma = soma + salario;

        if(salario > salarioAlto){
            salarioAlto = salario;
        }
        if(salario < salarioBaixo){
            salarioBaixo = salario;
        }
    }
    if(quantidade!=0){
        media = soma / quantidade;
        printf("media do salario: %f\n",media);
        printf("salario mais alto: %f\n",salarioAlto);
        printf("salario mais baixo: %f\n",salarioBaixo);
    }

    return 0;
}