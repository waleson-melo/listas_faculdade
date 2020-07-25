/* Questão 18. Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3
centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé
seja maior que Chico. */
#include <stdio.h>
int main(){
    int anos = 0;
    float c = 1.5, z = 1.1;

    while (z < c){
        c = c + 0.02;
        z = z + 0.03;
        anos = anos + 1;
    }
    printf("serao necessarios %d anos\n",anos);
    
    return 0;
}