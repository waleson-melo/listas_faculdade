/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: diferença = (A * B - C * D).
*/
#include <stdio.h>

int main(){
    int A, B, C, D, diferenca;
    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("C: ");
    scanf("%d", &C);
    printf("D: ");
    scanf("%d", &D);

    diferenca = (A * B - C * D);

    printf("Diferenca do produto: %d", diferenca);
    
    return 0;
}