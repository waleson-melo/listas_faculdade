/* Questão 12. Faça um Programa que pergunte em que turno a pessoa estuda. Peça para digitar M-matutino ou V
- Vespertino ou N - Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!",
conforme o caso. */
#include <stdio.h>
int main(){
    char turno;

    printf("qual turno vc estuda? (m-matutino, v-verpertino, n-noturno): ");
    scanf("%s", &turno);

    switch (turno)
    {
    case 'm':
        printf("bom dia!\n");
        break;
    case 'v':
        printf("boa tarde!\n");
        break;
    case 'n':
        printf("boa noite!\n");
        break;
    
    default:
        printf("opcao invalida\n");
        break;
    }

    return 0;
}