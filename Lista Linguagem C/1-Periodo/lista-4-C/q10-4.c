/* Questão 10. Crie um algoritmo para ler a distância (km) e o tempo de viagem (horas) de um automóvel, e
informar se a velocidade média foi superior ao limite (110 km/h) ou não. */
#include <stdio.h>
int main(){
    int distancia, tempo, velocidade;

    printf("distancia percorrida em km: ");
    scanf("%d", &distancia);
    printf("tempo de viagem em horas: ");
    scanf("%d", &tempo);

    velocidade = distancia / tempo;

    if(velocidade > 110){
        printf("sua velocidade media esta acima de 110km/h\n");
    }

    return 0;
}