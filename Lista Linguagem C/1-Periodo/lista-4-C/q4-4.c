/* Questão 4. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Considere que um
mês tenha 30 dias. */
#include <stdio.h>
int main(){
    int idade, diasDEvida;

    printf("idade: ");
    scanf("%d", &idade);

    diasDEvida = idade * 30 * 12;

    printf("voce viveu %d dias\n", diasDEvida);

    return 0;
}
