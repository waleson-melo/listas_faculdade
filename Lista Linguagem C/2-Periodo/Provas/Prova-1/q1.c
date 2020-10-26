#include<stdio.h>
#include<stdlib.h>

#define T 12

void preencher(int V[T], int t);
void mostrar(int V[T], int t);
int valores(int V[T], int M[T][2], int t);
void moda(int M[T][2], int t, int quant);

int main()
{
	int V[T], M[T][2], quant = 0;

    // Preenchendo o Vetor
    preencher(V, T);
    // Mostrando o Vetor
    mostrar(V, T);
    // Salvando os valores que se repetem e a sua frequencia
    quant = valores(V, M, T);

    // Verificando a moda
    moda(M, T, quant);

}

// FUNÇÕES
void preencher(int V[T], int t){
    int i;
    for(i = 0; i < t; i++)
        V[i] = 1 + rand() % 5;
}
void mostrar(int V[T], int t){
    int i;
    for(i = 0; i < t; i++)
        printf("%d\t", V[i]);
    printf("\n");
}
int valores(int V[T], int M[T][2], int t){
    int i, j, aux, cont = 0, l = 0, quant = 0;
    // Ordenar o vetor para contar os valores repetidos
    for(i = 0; i < t; i++){
        for(j = i + 1; j < t; j++){
            if(V[j] < V[i]){
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }
    // Contando os numeros repetidos
    for(i = 0; i < t; i++){
        cont = 0;
        for(j = i; j < t; j++)
            if(V[i] == V[j])
                cont++;
            else
                j = t;
            
        if(cont > 1)
            i += cont-1;
        // Inserindo na matriz
        M[l][0] = V[i];
        M[l][1] = cont;

        l++;
        quant++;
    }
    return quant;
}
void moda(int M[T][2], int t, int quant){
    int moda = M[0][1], pos = -1, i;
    for(i = 1; i < quant; i++)
        if(moda < M[i][1])
            pos = i;
        
    if(pos != -1){
        printf("moda = %d\n", M[pos][0]);
    } else{
        printf("Nao existe moda\n");
    }
}