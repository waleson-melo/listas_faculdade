/* Faça um algoritmo que receba N número inteiros e conte quantos são números 
pares e quantos são ímpares. No final, imprima o resultado. */
#include <stdio.h>
int main(){
    int n = 1, qPar = 0, qImp = 0;

    while(n!=-1){
        printf("numero (-1 para sair): ");
        scanf("%d", &n);

        if(n==-1){
            break;
        } 
        if(n%2==0){
            qPar = qPar + 1;
        } else{
            qImp = qImp + 1;
        }
    }
    printf("pares: %d\nimpares: %d\n",qPar,qImp);
    printf("quatidade de numeros pares: %d\n",qPar);
    printf("quatidade de numeros impares: %d\n",qImp);

    return 0;
}