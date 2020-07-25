/* Questão 14. Calcule o valor de W de acordo com a fórmula abaixo. O valor de N é fornecido pelo usuário,
sendo o limite da reptetição.
W = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + ... 1/N */
#include <stdio.h>
int main(){
    int n,i;
    float w = 1;

    printf("digite um numero para ser o limite: ");
    scanf("%d", &n);

    for(i=2;i<n+1;i++){
        w= w + (1 / i);
    }
    printf("%d\n", w);

    return 0;
}