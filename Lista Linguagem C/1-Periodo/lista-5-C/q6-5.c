/* Construa um algoritmo que leia um grupo de 50 valores inteiros, determine:
a) A soma dos números positivos;
b) A quantidade de valores negativos; */
#include <stdio.h>
int main(){
    int sPositivos = 0, qNegativos = 0, i, num;

    for(i=1;i<50+1;i++){
        printf("numero: ");
        scanf("%d", &num);

        if(num>0){
            sPositivos = sPositivos + 1;
        } else{
            qNegativos = qNegativos + 1;
        }
    }
    printf("Soma dos numeros positivos: %d\n",sPositivos);
    printf("quantidade de numeros negativos: %d\n",qNegativos);

    return 0;
}