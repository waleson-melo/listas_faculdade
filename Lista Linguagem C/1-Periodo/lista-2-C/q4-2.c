/* Questão 4. Faça um algoritmo que calcule a média ponderada de um aluno, a partir de suas 3 notas
obtidas no curso, sabendo-se que a primeira avaliação tem peso 2, a segunda tem peso 4 e a
terceira tem peso 4. No final, mostre a média final do aluno e também verifique se o aluno foi
aprovado, se está na prova final ou se foi reprovado. Para este caso, aplique o sistema de avaliação
da UFAM. */
#define A1 2
#define A2 4
#define A3 4
#include <stdio.h>
int main(){
    float nota1, nota2, nota3, mediaP;

    printf("primeira nota: ");
    scanf("%f", &nota1);
    printf("segunda nota: ");
    scanf("%f", &nota2);
    printf("terceira nota: ");
    scanf("%f", &nota3);

    mediaP = (nota1 * A1 + nota1 * A2 + nota3 * A3) / (A1 + A2 + A3);

    printf("\nMedia Ponderada: %.2f\n", mediaP);

    if(mediaP < 8 && mediaP >= 5){
        printf("aluno na prova final\n");
    } else{
        if(mediaP < 5){
            printf("aluno reprovado\n");
        } else {
            printf("aluno aprovado\n");
        }
    }

    return 0;
}