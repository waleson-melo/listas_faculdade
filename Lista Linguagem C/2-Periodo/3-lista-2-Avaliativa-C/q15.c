#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 2

typedef struct entrevista{
    int idade;
    float rendaMensal;
    char nome[50],
         sexo[10],
         fumante[4],
         gostaEsporte[4],
         pratiAtivFisi[4];
}Entrevista;

void inserir(Entrevista entrevistado[T], int *quant);
void pesquisar(Entrevista entrevistado[T], int quant);
void estatisticas(Entrevista entrevistado[T], int quant, int op);

int main()
{
    Entrevista entrevistado[T];
    int i = 1, op, quant = 0;

    while(i != 0){
        printf("1-Inserir\n2-Pesquisar\n3-Estatisticas\n0-Sair\nOpcao: ");
        scanf("%d", &op);

        switch(op){
            case 1:
            // Se estiver no windows troque para system("cls")
                system("clear");
                inserir(entrevistado, &quant);
                break;
            case 2:
            // Se estiver no windows troque para system("cls")
                system("clear");
                pesquisar(entrevistado, quant);
                break;
            case 3:
            // Se estiver no windows troque para system("cls")
                system("clear");
                printf("1-Homens e Mulheres\n2-Faixa Etaria (18 a 40 anos)\n3-Fumantes\n4-Renda Media\nOpcao: ");
                scanf("%d", &op);
                estatisticas(entrevistado, quant, op);
                break;
            case 0:
                i = 0;
                break;
            default:
                printf("OPCAO INVALIDA\n\n");
                break;
        }
    }
    return 0;
}

// FUNÇOES
// Inserindo os entrevistados na lista
void inserir(Entrevista entrevistado[T], int *quant)
{
    if(*quant != T){
        printf("======INSERIR======\n");

        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", entrevistado[*quant].nome);

        setbuf(stdin, NULL);
        printf("Sexo (feminino) (masculino) (outro): ");
        scanf("%[^\n]s", entrevistado[*quant].sexo);

        printf("Idade: ");
        scanf("%d", &entrevistado[*quant].idade);

        printf("Renda Mensal: ");
        scanf("%f", &entrevistado[*quant].rendaMensal);

        setbuf(stdin, NULL);
        printf("Eh fumante? (sim) (nao): ");
        scanf("%[^\n]s", entrevistado[*quant].fumante);


        setbuf(stdin, NULL);
        printf("Gosta de esporte? (sim) (nao): ");
        scanf("%[^\n]s", entrevistado[*quant].gostaEsporte);

        setbuf(stdin, NULL);
        printf("Pratica atividade fisica? (sim) (nao): ");
        scanf("%[^\n]s", entrevistado[*quant].pratiAtivFisi);

        printf("---------------------------------------------\n");

        *quant += 1;
    } else{
        printf("CHEIO!!!\n\n");
    }
}

// Pesquisar entrevistado pelo nome
void pesquisar(Entrevista entrevistado[T], int quant)
{
    if(quant != 0){
        int i, cont = 0;
        char nome[50];

        printf("======PESQUISAR======\n");
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", nome);

        for(i = 0; i < T; i++){
            if(strcmp(nome, entrevistado[i].nome) == 0){
                printf("nome: %s\nsexo: %s\nidade: %d\nrenda: %0.2f\nfumante: %s\ngosta esporte: %s\npratica esporte: %s\n",
                    entrevistado[i].nome, entrevistado[i].sexo, entrevistado[i].idade, entrevistado[i].rendaMensal,
                    entrevistado[i].fumante, entrevistado[i].gostaEsporte, entrevistado[i].pratiAtivFisi);
                printf("---------------------------------------------\n");

                cont++;
            }
        }
        if(cont == 0){
            system("clear");
            printf("Entrevistado \"%s\" nao encontrado\n\n", nome);
        }
    } else{
        printf("VAZIO\n\n");
    }
}

// Estatisticas
void estatisticas(Entrevista entrevistado[T], int quant, int op)
{
    if(quant != 0){
        int i, contH = 0, contM = 0, contI = 0, contF = 0, contRM = 0;
        float percenH, percenM, percenI, percenF, rendaM;

        switch(op){
            case 1:
                // Contar o numero de homens e de mulheres
                for(i = 0; i < quant; i++){
                    if(strcmp("masculino", entrevistado[i].sexo) == 0){
                        contH++; 
                    } else if(strcmp("feminino", entrevistado[i].sexo) == 0){
                        contM++;
                    }
                }
                percenH = (float)(contH * 100) / quant;
                percenM = (float)(contM * 100) / quant;
                printf("Percentual:\nHomens %0.2f%%\nMulheres %0.2f%%\n\n", percenH, percenM);
                break;
            case 2:
                // Percentual de faixa etaria 18 a 40 anos
                for(i = 0; i < T; i++){
                    if((entrevistado[i].idade >= 18) && (entrevistado[i].idade <= 40)){
                        contI++;
                    }
                }
                percenI = (float)(contI * 100) / quant;
                printf("Percentual pessoa faixa etaria 18 a 40 anos: %0.2f%%\n\n", percenI);
                break;
            case 3:
                // Percentual de fumantes
                for(i = 0; i < T; i++){
                    if(strcmp("sim", entrevistado[i].fumante) == 0){
                        contF++;
                    }
                }
                percenF = (float)(contF * 100) / quant;
                printf("Percentual fumantes: %0.2f%%\n\n", percenF);
                break;
            case 4:
                // Renda Media
                for(i = 0; i < T; i++){
                    contRM += entrevistado[i].rendaMensal;
                }
                rendaM = (float)contRM / quant;
                printf("Renda media: %0.2f%%\n\n", rendaM);
                break;
            default:
                printf("OPCAO INVALIDA\n\n");
                break;
        }
    } else{
        system("clear");
        printf("VAZIO\n\n");
    }
}
