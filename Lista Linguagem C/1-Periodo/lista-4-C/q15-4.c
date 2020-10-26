/* Questão 15. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
• R$ 5.50 por diária, se o número de diárias for maior que 15;
• R$ 6.00 por diária, se o número de diárias for igual a 15;
• R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que mostre o nome e o total da conta de um cliente. */
#include <stdio.h>
int main(){
    char nome[20];
    int dia;
    float diaria;

    fflush(stdin);
    printf("nome cliete: ");
    scanf("%s", &nome);
    printf("dias: ");
    scanf("%d", &dia);

    if(dia > 15){
        diaria = dia * 5.5 * 60;
    } else{
        if(dia == 15){
            diaria = dia * 6 * 60;
        } else{
            if(dia < 15){
                diaria = dia * 8 * 60;
            }
        }
    }
    printf("cliente: %s\nconta total: %.2f",nome, diaria);

    return 0;
}