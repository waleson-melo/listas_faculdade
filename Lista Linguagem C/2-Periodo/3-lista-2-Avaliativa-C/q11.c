#include<stdio.h>

#define T 5

typedef struct eletro{
    char nome[15];
    float potencia;
    float tempo;
}Eletro;

int main()
{
    Eletro eletro[T];
    int i, t;
    float soma = 0, consumoTotal, consumoRelativo;

    for(i = 0; i < T; i++){
        printf("Nome: ");
        scanf("%[^\n]s", eletro[i].nome);
        printf("Potencia: ");
        scanf("%f", &eletro[i].potencia);
        printf("Tempo ativo por dia: ");
        scanf("%f", &eletro[i].tempo);
        setbuf(stdin, NULL);
        printf("-------------------------\n");
    }

    printf("Dias: ");
    scanf("%d", &t);

    for(i = 0; i < T; i++){
        soma += eletro[i].potencia * eletro[i].tempo;
    }
    consumoTotal = soma * t;

    printf("=========DADOS=========\n");
    printf("Consumo total: %0.2f\n", consumoTotal);
    printf("-------------\n");
    for(i = 0; i < T; i++){
        consumoRelativo = (((eletro[i].potencia * eletro[i].tempo) * t) / consumoTotal) * 100;
        printf("Nome: %s\nConsumo relativo: %0.2f%%\n",
            eletro[i].nome, consumoRelativo);
        printf("-------------------------\n");
    }

    return 0;
}