/* Questão 8. Crie um algoritmo que receba nome, sexo (M ou F) e idade de uma pessoa. Se a pessoa for do sexo
feminino e tiver menos do que 25 anos, imprimir seu nome e a mensagem: “Aceita!”. Caso contrário, imprimir o nome
e a mensagem: “Não aceita!”. */
#include <stdio.h>
int main(){
    char nome[20], sexo;
    int idade;

    printf("nome: ");
    scanf("%s", &nome[20]);
    printf("idade: ");
    scanf("%d", &idade);
    printf("sexo(M-masculino, F-feminino): ");
    scanf("%s", &sexo);

    if(sexo == 'f' || sexo == 'F'){
        if(idade < 25){
            printf("%s Aceita\n", nome);
        } else{
            printf("%s nao aceita\n", nome);
        }
    }

    return 0;
}