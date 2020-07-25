/* Questão 15. Faça um algoritmo para:
a) Ler um valor k qualquer
b) Calcular T, como segue abaixo:
T = ( k+1)+(k+2)+(k+3)+(k+4)+(k+5)+ ...+(k+100) */
#include <stdio.h>
int main(){
    int t = 0, k, i;
    printf("digite um numero: ");
    scanf("%d", &k);

    for(i = 1; i < 100+1;i++){
        t = t + (k + i);
    }
    printf("%d\n",t);

    return 0;
}