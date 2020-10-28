#include<stdio.h>
#include<stdlib.h>

#define T 3

typedef struct paciente{
    int cpf;
    int idade;
}Paciente;

void inserirPaciente(Paciente fila[T], int *quant, int *numPacAte, int *inicio);
void mostrarFila(Paciente fila[T], int quant);

int main()
{
    Paciente fila[T];
    int numPacAte = 0, i = 1, op, quant = 0, inicio = quant;

    while(i != 0){
        mostrarFila(fila, quant);

        printf("1-Inserir Paciente\n2-Retirar Paciente\nOpcao: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("=====INSERIR=====\n");
                inserirPaciente(fila, &quant, &numPacAte, &inicio);
                break;
            default:
                printf("OPCAO INVALIDA\n\n");
                break;
        }
    }


    return 0;
}

// FUNÇÔES
void inserirPaciente(Paciente fila[T], int *quant, int *numPacAte, int *inicio)
{
    int idade, i, pos;

    if((*quant < T) || (*numPacAte < T)){
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade >= 60){
            for(i = *quant; i >= *inicio; i--){
                pos = i;
            }
            fila[pos].idade = idade;
            printf("CPF: ");
            scanf("%d", &fila[pos].cpf);
            *inicio += 1;
            *quant += 1;
        } else{
            for(i = *quant; i >= 0; i--){
                fila[i+1] = fila[i];
            }
            fila[0].idade = idade;
            setbuf(stdin, NULL);
            printf("CPF: ");
            scanf("%d", &fila[0].cpf);
            *quant += 1;
            *numPacAte += 1;
            system("clear");
        }
    } else{
        printf("FILA CHEIA\n");
    }
}

void mostrarFila(Paciente fila[T], int quant)
{
    int i;
    printf("=====FILA=====\n");
    if(quant > 0){
        for(i = quant-1; i >= 0; i--){
            printf("CPF: %d\nIdade: %d\n", fila[i].cpf, fila[i].idade);
            printf("-----------------------\n");
        }
    } else{
        printf("FILA VAZIA!!!\n");
        printf("-----------------------\n");
    }
}