#include<stdio.h>
#include<math.h>

float distPontos(float x1, float x2, float y1, float y2);

int main()
{
    float x1, x2, y1, y2, dist;
    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    dist = distPontos(x1, x2, y1, y2);

    printf("Distancia entre os pontos: %f\n", dist);

    return 0;
}

// FUNÇOES
float distPontos(float x1, float x2, float y1, float y2)
{
    float dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}