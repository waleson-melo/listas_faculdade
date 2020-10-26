#include<stdio.h>

#define T 5

typedef struct{
    char marca[15];
    int ano;
    float preco;
}Carro;

int main()
{
    Carro carro[T];
    int i;
    float p = 1;

    for(i = 0; i < T; i++){
        printf("Marca: ");
        scanf("%[^\n]s", carro[i].marca);
        printf("Ano: ");
        scanf("%d", &carro[i].ano);
        printf("Preco: ");
        scanf("%f", &carro[i].preco);
        setbuf(stdin, NULL);
        printf("------------------------\n");
    }

    printf("===========Carros=============\n");
    while(p != 0){
        printf("Limite valor do carro: ");
        scanf("%f", &p);

        for(i = 0; i < T; i++){
            if(carro[i].preco <= p){
                printf("Marca: %s\nAno: %d\nPreco: %0.2f\n", carro[i].marca, carro[i].ano, carro[i].preco);
                printf("------------------------\n");
            }
        }
    }

    return 0;
}