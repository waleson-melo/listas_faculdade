/* Questão 7. Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever:
a) o maior preço lido
b) a média aritmética dos preços dos produtos */
#include <stdio.h>
int main(){
    float maior = 0, soma = 0, n = 15, media, preco;
    int i;
    char cod[5];

    for(i=1;i<n+1;i++){
        fflush(stdin);
        printf("cod produto: ");
        scanf("%s", &cod);
        printf("valor produto: ");
        scanf("%f", &preco);

        soma = soma + preco;

        if(preco > maior){
            maior = preco;
        }
    }
    media = soma / n;

    printf("maior valor: %f\n",maior);
    printf("media do preco: %f\n",media);

    return 0;
}
