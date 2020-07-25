/* Questão 10. A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
Categoria
Idade
Infantil A 5 – 7 anos
Infantil B 8 – 10 anos
Juvenil A 11 – 13 anos
Juvenil B 14 – 17 anos
Sênior Maiores de 18 anos */
#include <stdio.h>
int main(){
    int idade;

    printf("idade ");
    scanf("%d", &idade);

    if(idade > 5 && idade < 7){
        printf("Infantil A\n");
    } else{
        if(idade > 8 && idade < 10){
            printf("Infantil B\n");
        } else{
            if(idade > 11 && idade < 13){
                printf("Juvenil A\n");
            } else{
                if(idade > 14 && idade < 17){
                    printf("Juvenil B\n");
                } else{
                    if(idade >= 18){
                        printf("Senior maior de 18 anos\n");
                    }
                }
                
            }
        }
        
    }

    return 0;
}