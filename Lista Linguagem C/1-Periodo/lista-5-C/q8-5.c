/* Questão 8. Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
ser somados. Escreva o valor final da soma efetuada. */
#include <stdio.h>
int main(){
    int soma = 0, i, num;

    for(i=1;i<10+1;i++){
        printf("numero: ");
        scanf("%d", &num);
        if(num<40){
            soma = soma + num;
        }
    }
    printf("resultado da soma: %d\n", soma);

    return 0;
}