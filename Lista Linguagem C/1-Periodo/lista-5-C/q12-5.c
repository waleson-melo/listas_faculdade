/* Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
(QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor -1 é utilizado como sentinela
para fim de leitura.
Ex.: 1,2,3,4,5 => Pares=2 Ímpares=3 */
#include <stdio.h>
int main(){
    int qP = 0, qI = 0, n = 0;

    while(n!=-1){
        printf("digite um numero: ");
        scanf("%d", &n);

        if(n%2==0){
            qP = qP + 1;
        }
        if(n%2!=0 && n!= -1){
            qI = qI + 1;
        }
    }
    printf("quantidade de pares: %d",qP);
    printf("quantidade de impares: %d",qI);

    return 0;
}