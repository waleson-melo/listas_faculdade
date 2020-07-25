/*
Questão 15. Segundo uma tabela médica, o peso ideal está relacionado com a altura e sexo. Faça um algoritmo que
receba a altura e o sexo (M ou F) de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes fórmulas:
Homens: (72.7 * altura) – 58
Mulheres: (62.1 * altura) – 44.7
*/
#include <stdio.h>
int main(){
    float altura, peso_ideal;
    char sexo;

    printf("altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("sexo(M ou F): ");
    scanf("%s", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("peso ideal: %.2f", peso_ideal);
    } else{
        if(sexo == 'F' || sexo == 'f'){
            peso_ideal = (62.1 * altura) - 44.7;
            printf("peso ideal: %.2f", peso_ideal);
        }
    }

    return 0;
}