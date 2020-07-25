/* Questão 5. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. Considerando que alguém
está pagando uma compra, escreva um algoritmo que mostre o número mínimo de notas que o caixa deve
fornecer como troco. Mostre também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
do troco. Suponha que o sistema monetário não utilize moedas. */
#include <stdio.h>
int main(){
    int dinheiro, troco, compra, cedula;
    
    printf("dinheiro: ");
    scanf("%d", &dinheiro);
    printf("compra: ");
    scanf("%d", &compra);

    troco = compra - dinheiro;

    if(troco > 100){
        cedula = troco / 100;
        troco = troco % 100;
        printf("%d cedulas de 100\n", cedula);
    }
    if(troco > 10){
        cedula = troco / 10;
        troco = troco % 10;
        printf("%d cedulas de 10\n", cedula);
    }
    if(troco > 1){
        cedula = troco / 1;
        troco = troco % 1;
        printf("%d cedulas de 1\n", cedula);
    }

    return 0;
}