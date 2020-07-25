/* Questão 3. Da mesma forma que a multiplicação pode ser expressa como o resultado de várias adições, a
potência pode ser representada por uma série de multiplicações. Faça um algoritmo que calcule a potência de
um número informado pelo usuário utilizando o operador “*”. */
#include <stdio.h>
int main(){
    int exp, bas, i, result = 1;

    printf("digite o expoente: ");
    scanf("%d", &exp);
    printf("digite a base: ");
    scanf("%d", &bas);

    for(i = 1;i < exp + 1;i++){
        result = bas * result;
    }
    printf("%d\n",result);


    return 0;
}