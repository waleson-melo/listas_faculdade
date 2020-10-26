/* Questão 9. Escrever um algoritmo que leia o nome e o sexo de 50 pessoas e informe o nome e o sexo de cada
uma. Opções: (ex.: 1 – Masculino / 2 - Feminino). No final informe total de homens e de mulheres. */
#include <stdio.h>
int main(){
    int qM = 0, qF = 0, sexo, i;
    char nome[20];

    for(i=1;i<51;i++){
        fflush(stdin);
        printf("Nome: ");
        scanf("%s", &nome);
        printf("Sexo: ");
        scanf("%d", &sexo);

        if(sexo == 1){
            qM = qM + 1;
        } else{
            if(sexo == 2){
                qF = qF + 1;
            } else{
                printf("opcao invalida");
            }
        }

    }
    printf('quantidade de homens: %d\nquantidades de mulheres: %d', qM,qF);

    return 0;
}
