/* Questão 10. Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em
uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse
através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem
(em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância
percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas
decimais após o ponto. O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na
viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h). Imprima a
quantidade de litros necessária para realizar a viagem. */
#include <stdio.h>
#define KML 12
int main(){
    int tempoGastos,  velocidadeM, distancia;

    printf("tempo gasto(h): ");
    scanf("%d", &tempoGastos);
    printf("velocidade media(km/h): ");
    scanf("%f", &velocidadeM);

    distancia = velocidadeM / tempoGastos;

    printf("distancia: %.2d", distancia);


    return 0;
}