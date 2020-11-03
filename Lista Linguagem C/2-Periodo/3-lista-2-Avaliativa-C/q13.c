#include<stdio.h>
#include<stdlib.h>

#define T 3        // Tamanho do vetor da fila de atendimento

typedef struct paciente{
    int cpf;
    int idade;
}Paciente;

void inserirPaciente(Paciente fila[T], int *numPac, int *quantAte);
void mostrarFila(Paciente fila[T], int numPac);

int main()
{
    Paciente fila[T];
    int numPac = 0, i = 1, quantAte = 0, op;    // quantAte é o numero de pacientes atendidos

    while(i != 0){

        if(quantAte < T){
            printf("==========Inserir==========\n");
            inserirPaciente(fila, &numPac, &quantAte);
            mostrarFila(fila, numPac);
        } else{
            i = 0;
        }
    }

    return 0;
}

// FUNÇÔES
void inserirPaciente(Paciente fila[T], int *numPac, int *quantAte)
{
    if(*quantAte <= T){
        int pos = *numPac, idade, i;

        printf("Idade: ");
        scanf("%d", &idade);

        // Verificando a posicao onde ele vai ficar no vetor caso a idade seja maior ou igual a 60
        // se nao for os dados vao para a direita e adiciona o paciente no final da fila
        if(idade >= 60){
            for(i = *numPac-1; i >= 0; i--){
                if((fila[i].idade >= 60) && (idade < fila[i].idade)){
                    fila[i+1] = fila[i];
                    pos = i;
                } 
            }
            fila[pos].idade = idade;
            printf("CPF: ");
            scanf("%d", &fila[pos].cpf);
            *numPac += 1;
            *quantAte += 1;
        } else{
            pos = 0;
            for(i = *numPac-1; i >= 0; i--){
                fila[i+1] = fila[i];
            }
            fila[pos].idade = idade;
            printf("CPF: ");
            scanf("%d", &fila[pos].cpf);
            *numPac += 1;
            *quantAte += 1;
        }
        // Se estiver no windows troque para system("cls")
        system("clear");
    } else{
        printf("CHEIO\n");
    }
}

void mostrarFila(Paciente fila[T], int numPac)
{
    int i;
    printf("=====FILA=====\n");
    if(numPac > 0){
        for(i = numPac-1; i >= 0; i--){
            printf("CPF: %d\nIdade: %d\n", fila[i].cpf, fila[i].idade);
            printf("-----------------------\n");
        }
    } else{
        printf("FILA VAZIA!!!\n");
    }
}