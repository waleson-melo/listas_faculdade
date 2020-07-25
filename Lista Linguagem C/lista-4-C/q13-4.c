/* Questão 13. Faça um Programa que leia três números inteiros, em seguida mostre o maior e o menor deles. */
#include <stdio.h>
int main(){
    int num1, num2, num3, maior, menor;

    printf("produto: ");
    scanf("%d", &num1);
    printf("produto: ");
    scanf("%d", &num2);
    printf("produto: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;
// maior
    if(maior < num2){
        maior = num2;
    }
    if(maior < num3){
        maior = num3;
    }
// menor
    if(menor > num2){
        menor = num2;
    }
    if(menor > num3){
        menor = num3;
    }

    printf("maior: %d\nmenor: %d\n", maior, menor);

    return 0;
}