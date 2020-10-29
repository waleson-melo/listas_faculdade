#include <stdio.h>
#include <math.h>

typedef struct comodo{
	int tipo;
	float largura, altura, comprimento;
}Comodo;

// Prototipos das funçoes
float calculaArea(Comodo c);
float lampada(int x, float m);
	
int main(){
    Comodo comodo;
    int i = 1, tipo;	
    float area, numLampada, lam;

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
            lam = lampada(comodo.tipo, area);
            if(lam != 0){
                numLampada = ceil(lam);
                printf("\nNecessario %0.0f lampadas para esse comodo\n", numLampada);
            } else{
                printf("\nTipo de comodo invalido\n");
            }
            
            printf("------------------------------------------\n");
        }
        else{
            i = 0;
        } 
    }
}

// FUNÇOES
// Calcular a area
float calculaArea(Comodo comodo){
    float area = comodo.largura * comodo.comprimento;
    return area;
}

// Calcular o numero de lampadas
float lampada(int tipo, float m){
    if(tipo == 0){
        return m*12/60;
    } else if(tipo == 1){
        return m*15/60;
    } else if(tipo == 2){
        return m*18/60;
    } else if(tipo == 3){
        return m*20/60;
    } else if(tipo == 4){
        return m*22/60;
    } else{
        return 0;
    }
}