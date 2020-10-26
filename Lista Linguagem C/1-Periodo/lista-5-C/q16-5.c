/* Questão 16. Escreva um programa que receba um número do usuário e apresente a série de Fibobnacci até o
número lido. A série de Fibonacci é formada pela sequência: 1,1,2,3,5,8,13,21,34,..., etc. Esta série se
caracteriza pela soma de um termo posterior com o seu anterior subsequente. */
#include <stdio.h>
int main(){
    int a = 0, b = 1, valor, c = 1;

    printf("digite um numero: ");
    scanf("%d", &valor);

    while(b < valor){
        printf("%d\n",c);
        
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}