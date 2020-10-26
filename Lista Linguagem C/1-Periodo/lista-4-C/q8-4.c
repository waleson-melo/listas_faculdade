/* Questão 8. Sabendo que somente os municípiios com mais de 20.000 eleitores aptos têm segundo turno nas
eleições para prefeito caso o primeiro colocado não tenha mais do que 50% dos votos. Faça um algoritmo que
leia o nome do município, a quantidade de eleitores aptos, o número de votos do candidato mais votado e
informe se haverá segundo turno ou não na eleição municipal. */
#include <stdio.h>
int main(){
    char nomeM[20];
    int quantidadeEleitores, numeroVotos, porcentagemNumeroVotos;

    printf("Nome do municipio: ");
    scanf("%s", &nomeM[20]);
    printf("quantidades de eleitores aptos: ");
    scanf("%d", &quantidadeEleitores);
    printf("numero de votos do candidato mais votado: ");
    scanf("%d", &numeroVotos);

    porcentagemNumeroVotos = quantidadeEleitores * 0.5;

    if(quantidadeEleitores > 20000 && numeroVotos < porcentagemNumeroVotos){
        printf("havera segundo turno\n");
    } else{
        printf("nao tera segundo turno\n");
    }
    

    return 0;
}