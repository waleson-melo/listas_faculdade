/* Questão 7. Faça um algoritmo que leia do usuário cinco números. Se os valores forem diferentes identifique e
imprima o maior e o menor valor. */
#include <stdio.h>
int main(){
    int a, b, c, d, e, maior, menor;

    printf("numero: ");
    scanf("%d", &a);
    printf("numero: ");
    scanf("%d", &b);
    printf("numero: ");
    scanf("%d", &c);
    printf("numero: ");
    scanf("%d", &d);
    printf("numero: ");
    scanf("%d", &e);

    maior = a;
    menor = a;
    // maior
    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    if(maior <d){
        maior = d;
    }
    if(maior < e){
        maior = e;
    }
    // menor
    if(menor > b){
        menor = b;
    }
    if(menor > c){
        menor = c;
    }
    if(menor > d){
        menor = d;
    }
    if(menor > e){
        menor = e;
    }
    // imprimir
    printf("maior numero: %d\nmenor numero: %d\n", maior, menor);

    return 0;
}