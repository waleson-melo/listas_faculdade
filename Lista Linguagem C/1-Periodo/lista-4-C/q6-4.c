/* Questão 6. Faça um algoritmo que receba três números e armazene-os em três variáveis com os seguintes
nomes: maior, intermediário e menor. Depois imprima na tela os valores. */
#include <stdio.h>
int main(){
    int maior, intermediario, menor;

    printf("maior: ");
    scanf("%d", &maior);
    printf("intermediario: ");
    scanf("%d", &intermediario);
    printf("menor: ");
    scanf("%d", &menor);

    printf("%d %d %d\n", maior, intermediario, menor);

    return 0;
}
