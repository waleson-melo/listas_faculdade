/* Faça um algoritmo que receba o voto de 1000 eleitores. Nesta eleição são apenas três candidatos:
10 – José da feira / 20 – Maria Fumaça / 30 – Chico. No final, imprima o total de votos de cada candidato e a
quantidade de votos nulos/brancos. */
#include <stdio.h>
int main(){
    int c1=0, c2=0, c3=0, nb=0, i,votos;

    for(i=1;i<1000 + 1;i++){
        printf("candidatos 10 – José da feira / 20 – Maria Fumaça / 30 – Chico/ 0 - Branco/nulo: ");
        scanf("%d", &votos);

        if (votos == 10){
            c1 = c1 + 1;
        }elif (votos == 20){
            c2 = c2 + 1;
        }elif (votos == 30){
            c3 = c3 + 1;
        }elif (votos == 0){
            nb = nb + 1;
    }

    return 0;
}