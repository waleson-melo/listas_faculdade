/* Faça um algoritmo que leia um número inteiro e calcule o seu fatorial. Se o número for negativo,
informe que o valor é inválido. */
#include <stdio.h>
int main(){
    int num, fat = 1;

    printf("numero: ");
    scanf("%d", &num);
    
    if(num<0){
        printf("valor invalido\n");
    } else{
        while(num>=1){
            if(num>=0){
                fat = fat * num;
            }
            num = num -1;
        }
    }
    printf("%d\n", fat);

    return 0;
}