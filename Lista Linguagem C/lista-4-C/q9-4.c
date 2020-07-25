/* Questão 9. Crie um algoritmo que leia a temperatura de uma pessoa e mostre a mensagem “Febre Alta” (temp
≥ 39), “Febril” (39 > temp ≥ 37) ou “Sem Febre” (temp < 37). */
#include <stdio.h>
int main(){
    float t;

    printf("temperatura: ");
    scanf("%f", &t);

    if(t >= 39){
        printf("febre alta!");
    } else{
        if(39 > t >= 37){
            printf("febril");
        } else{
            printf("sem febre");
        }
    }

    return 0;
}