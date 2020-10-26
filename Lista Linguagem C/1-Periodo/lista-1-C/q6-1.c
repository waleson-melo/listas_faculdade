/* Questão 6. Crie um algoritmo que receba a base e a altura de um retângulo e imprima a saída
baseando nas seguintes fórmulas:
Perímetro: 2 * (base + altura)
Área: base * altura
Diagonal: raiz (base 2 +altura 2 )
Para isso, utilize duas variáveis para receber os valores lidos do usuário, além das demais variáveis para
armazenarem os cálculos. */
#include <stdio.h>
#include <math.h>
int main(){
    float altura, base, perimetro, area, diagonal;

    printf("altura: ");
    scanf("%f", &altura);
    printf("base: ");
    scanf("%f", &base);

    if(altura != base){
        perimetro = 2 * (base + altura);
        area = base * altura;
        diagonal = sqrt(base * base + altura * altura);

        printf("perimetro: %.2f\narea: %.2f\ndiagonal: %.2f\n", perimetro, area, diagonal);
    } else{
        printf("nao eh um retangulo\n");
    }

    return 0;
}