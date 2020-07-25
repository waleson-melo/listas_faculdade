/* 
Questão 2. Faça um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral:
Não eleitor (abaixo de 16 anos)
Eleitor obrigatório (18 – 65 anos)
Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos)
*/
#include <stdio.h>
int main(){
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65){
        printf("Eleitor Obrigatorio");
    } else{
        if((idade >=16 && idade < 18) || (idade > 65)){
            printf("Eleitor Facultativo");
        }
    }

    return 0;
}