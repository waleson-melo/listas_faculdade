/* Questão 9. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, segundo a fórmula:
    distancia = raiz quadrada(ao quadrado((x2 - x1)) - ao quadrado((y2 - y1))) */
#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2,y1, y2, distancia;

    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    printf("distancia dos pontos: %.2f\n", distancia);

    return 0;
}