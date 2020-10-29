#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 5     // Tamanho do vetor agenda

typedef struct pessoa{
    char nome[50], email[50], rua[50], complemento[50], bairro[30],
        cidade[40], estado[40], pais[40], observacao[50];
    int numeroC, cep, ddd, numeroT, dia, mes, ano;
}Pessoa;

// Prototipos das funçoes
void inserir(Pessoa agenda[T], int *quant);
void imprimirContato(Pessoa agenda[T], int pos);
void imprimiAgenda(Pessoa agenda[T], int quant);
void pesquisarNome(Pessoa agenda[T], int quant);
void pesquisarMes(Pessoa agenda[T], int quant);
void pesquisarDiaMes(Pessoa agenda[T], int quant);
void retirarPessoa(Pessoa agenda[T], int *quant);

int main()
{
    Pessoa agenda[T];
    int i = 1, op, quant = 0;   // op de opcao e quant de quantidade de elementos no vetor

    while(i != 0){
        printf("==========AGENDA==========\n");
        printf("1-Inserir\n2-Imprimir Contatos\n3-Pesquisar por nome\n");
        printf("4-Pesquisar por mes de nasc.\n5-Pesquisar por dia e mes de nasc.\n");
        printf("6-Retirar Pessoa\n0 - Sair\nOpcao: ");
        scanf("%d", &op);

        switch(op){
            case 1:
            // Se estiver no windows troque para system("cls")
                system("clear");
                inserir(agenda, &quant);
                break;
            case 2:
            // Se estiver no windows troque para system("cls")
                system("clear");
                imprimiAgenda(agenda, quant);
                break;
            case 3:
            // Se estiver no windows troque para system("cls")
                system("clear");
                pesquisarNome(agenda, quant);
                break;
            case 4:
            // Se estiver no windows troque para system("cls")
                system("clear");
                pesquisarMes(agenda, quant);
                break;
            case 5:
            // Se estiver no windows troque para system("cls")
                system("clear");
                pesquisarDiaMes(agenda, quant);
                break;
            case 6:
            // Se estiver no windows troque para system("cls")
                system("clear");
                retirarPessoa(agenda, &quant);
                break;
            case 0:
                i = 0;
                break;
            default:
            // Se estiver no windows troque para system("cls")
                system("clear");
                printf("Opcao invalida\n\n");
                break;
        }
    }
    return 0;
}

// FUNÇOES
// Insere o contato em ordem alfabetica
void inserir(Pessoa agenda[T], int *quant)
{
    int pos = *quant, i;
    char nome[50];

    printf("=======INSERIR CONTATO=======\n");
    if(*quant < T){
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", nome);
        // Verificando local de inserção e movendo os dados para a direita
        for(i = *quant; i >= 0; i--){
            if(strcmp(nome, agenda[i].nome) < 0){
                agenda[i+1] = agenda[i];
                pos = i;
            }
        }
        strcpy(agenda[pos].nome, nome);
        setbuf(stdin, NULL);
        printf("Email: ");
        scanf("%[^\n]", agenda[pos].email);
        setbuf(stdin, NULL);
        printf("Rua: ");
        scanf("%[^\n]", agenda[pos].rua);
        printf("Numero Casa: ");
        scanf("%d", &agenda[pos].numeroC);
        setbuf(stdin, NULL);
        printf("Complemento: ");
        scanf("%[^\n]s", agenda[pos].complemento);
        setbuf(stdin, NULL);
        printf("Bairro: ");
        scanf("%[^\n]s", agenda[pos].bairro);
        printf("Cep: ");
        scanf("%d", &agenda[pos].cep);
        setbuf(stdin, NULL);
        printf("Cidade: ");
        scanf("%[^\n]s", agenda[pos].cidade);
        setbuf(stdin, NULL);
        printf("Estado: ");
        scanf("%[^\n]s", agenda[pos].estado);
        setbuf(stdin, NULL);
        printf("Pais: ");
        scanf("%[^\n]s", agenda[pos].pais);
        printf("DDD: ");
        scanf("%d", &agenda[pos].ddd);
        printf("Telefone: ");
        scanf("%d", &agenda[pos].numeroT);
        printf("Dia nascimento: ");
        scanf("%d", &agenda[pos].dia);
        printf("Mes nascimento: ");
        scanf("%d", &agenda[pos].mes);
        printf("Ano nascimento: ");
        scanf("%d", &agenda[pos].ano);
        setbuf(stdin, NULL);
        printf("Observacoes: ");
        scanf("%[^\n]s", agenda[pos].observacao);
        *quant += 1;
    } else{
        printf("AGENDA CHEIA!!!\n");
    }
}

// Imprimir todos os dados passando a posicao por parametro
// Essa funçao foi feita para diminuir o numero de codigo duplicado em algumas funçoes
void imprimirContato(Pessoa agenda[T], int pos)
{
    printf("Nome: %s\nTelefone: %d %d\nEmail: %s\nRua: %s\nNumero casa: %d\nComplemento: %s\n",
        agenda[pos].nome, agenda[pos].ddd, agenda[pos].numeroT, agenda[pos].email,
        agenda[pos].rua, agenda[pos].numeroC, agenda[pos].complemento);
    printf("Bairro: %s\nCep: %d\nCidade: %s\nEstado: %s\nPais: %s\n",
        agenda[pos].bairro, agenda[pos].cep, agenda[pos].cidade, agenda[pos].estado, agenda[pos].pais);
    printf("Dia nascimento: %d\nMes nascimento: %d\nAno nascimento: %d\nObservaçoes: %s\n",
        agenda[pos].dia, agenda[pos].mes, agenda[pos].ano, agenda[pos].observacao);
    printf("-------------------------------\n");
}

// Imprimir todos os contatos com os campos nome, telefone e email ou todos os dados
void imprimiAgenda(Pessoa agenda[T], int quant)
{
    int i, op;

    printf("=======IMPRIMIR CONTATOS=======\n");
    // Verificando se existem contatos cadastrados
    if(quant > 0){
        system("clear");
        printf("1-Emprimir nome, telefone e email\n2-Emprimir tudo\nOpcao: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("-------------------------------\n");
                for(i = 0; i < quant; i++){
                    printf("Nome: %s\nTelefone: %d %d\nEmail: %s\n",
                        agenda[i].nome, agenda[i].ddd, agenda[i].numeroT, agenda[i].email);
                    printf("-------------------------------\n");
                }
                break;
            case 2:
                printf("-------------------------------\n");
                for(i = 0; i < quant; i++){
                    // Imprimir tudo
                    imprimirContato(agenda, i);
                }
                break;
            default:
                printf("OPCAO INVALIDA!!!\n");
                break;
        }
    } else{
        printf("AGENDA VAZIA!!!\n");
    }
}

// Pesquisar pessoa pelo nome
void pesquisarNome(Pessoa agenda[T], int quant)
{
    int i, cont = 0;
    char nome[50];

    printf("=======PESQUISAR PELO NOME=======\n");
    if(quant > 0){
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", nome);
        printf("----------------\n");
        for(i = 0; i < quant; i++){
            if(strcmp(nome, agenda[i].nome) == 0){
                // Imprimir tudo
                imprimirContato(agenda, i);
                cont++;
            }
        }
        if(cont == 0){
            printf("NENHUM CONTATO \"%s\" ENCONTRADO\n", nome);
        }
    } else{
        printf("AGENDA VAZIA!!!\n");
    }
}

// Pesquisar pessoa pelo mes de nascimento
void pesquisarMes(Pessoa agenda[T], int quant)
{
    int i, cont = 0, mes;

    printf("=======PESQUISAR PELO MES DE NASC.=======\n");
    if(quant > 0){
        printf("Mes de nascimento: ");
        scanf("%d", &mes);
        printf("----------------\n");
        for(i = 0; i < quant; i++){
            if(mes == agenda[i].mes){
                // Imprimir tudo
                imprimirContato(agenda, i);
                cont++;
            }
        }
        if(cont == 0){
            printf("NENHUM CONTATO ENCONTRADO\n");
        }
    } else{
        printf("AGENDA VAZIA!!!\n");
    }
}

// Pesquisar pessoa pelo dia e mes de nascimento
void pesquisarDiaMes(Pessoa agenda[T], int quant)
{
    int i, cont = 0, dia, mes;

    printf("=======PESQUISAR PELO MES DE NASC.=======\n");
    if(quant > 0){
        printf("Dia de nascimento: ");
        scanf("%d", &dia);
        printf("Mes de nascimento: ");
        scanf("%d", &mes);
        printf("----------------\n");
        for(i = 0; i < quant; i++){
            if((dia == agenda[i].dia) && (mes == agenda[i].mes)){
                // Imprimir tudo
                imprimirContato(agenda, i);
                cont++;
            }
        }
        if(cont == 0){
            printf("NENHUM CONTATO ENCONTRADO\n");
        }
    } else{
        printf("AGENDA VAZIA!!!\n");
    }
}

// Retirar pessoa da agenda
void retirarPessoa(Pessoa agenda[T], int *quant)
{
    int i, pos = -1;
    char nome[50];

    printf("=======RETIRAR PESSOA=======\n");
    if(*quant > 0){
        setbuf(stdin, NULL);
        printf("Nome: ");
        scanf("%[^\n]s", nome);
        // Porcurando a posiçao do contato
        for(i = *quant; i >= 0; i--){
            if(strcmp(nome, agenda[i].nome) == 0){
                pos = i;
                i = -1;
            }
        }
        // Se for encontrado o contato ele entra na condiçao
        if(pos != -1){
            // Verificando se o contato esta no fim do vetor
            if(pos == *quant){
                *quant -= 1;
            } else{
                // Movendo os dados para esquerda no vetor
                for(i = pos; i < *quant; i++){
                    agenda[i] = agenda[i+1];
                }
                *quant -= 1;
                printf("CONTATO \"%s\" APAGADO!!!\n", nome);
            }
        } else{
            printf("CONTATO \"%s\" NAO EXISTE!!!\n", nome);
        }
    } else{
        printf("AGENDA VAZIA!!!\n");
    }
}