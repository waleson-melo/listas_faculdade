#include <stdio.h>
#include <math.h>

typedef struct comodo{
	int tipo;
	float largura;
	float altura;
	float comprimento;
}Comodo;

float calculaArea(Comodo c);
float lampada(int x, float m);
	
int main(){
    Comodo comodo;
    int i = 1, tipo;	
    float area, numLampada;

    while(i != 0){
        printf("Tipo do comodo: ");
        scanf("%d", &comodo.tipo);

        if(comodo.tipo != -1){
            printf("Largura: ");
            scanf("%f", &comodo.largura);
            printf("Altura: ");
            scanf("%f", &comodo.altura);
            printf("Comprimento: ");
            scanf("%f", &comodo.comprimento);
            
            area = calculaArea(comodo);
            numLampada = ceil(lampada(comodo.tipo, area));
            
            printf("Para esse comundo e necessario %0.0f lampadas\n", numLampada);
        }
        else{
            i = 0;
        } 
    }
}

// FUNÇOES
float calculaArea(Comodo comodo){
    float area = comodo.largura * comodo.comprimento;
    return area;
}

float lampada(int x, float m){
    switch(x){
        case 0:
            return m*12/60;
        case 1:
            return m*15/60;
        case 2:
            return m*18/60;
        case 3:
            return m*20/60;
        case 4:
            return m*22/60;	
    }
}