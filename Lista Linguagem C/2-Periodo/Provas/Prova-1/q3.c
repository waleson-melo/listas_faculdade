#include<stdio.h>

#define L 5
#define C 4

void preencher(int M[L][C], int l, int c);
void mostrar(int M[L][C], int l, int c);
void notaFinal(int M[L][C], int l);
void maiorNota(int M[L][C], int l, int c);
void media(int M[L][C], int l, int c);

int main()
{
	int M[L][C], i, j;
	
	// Preenchendo a matricula, nota da prova e nota do trabalho
	preencher(M, L, C);

	// Mostrano os dados
	printf("==========Dados==========\n");
	mostrar(M, L, C-1);

	// Calculando a nota final
	notaFinal(M, L);
	
	// Mostrano os dados
	printf("=========Nota Final===========\n");
	mostrar(M, L, C);

	// Maior nota
	maiorNota(M, L, C);

	// Media aritimetica
	media(M, L, C);

}

// FUNÇÕES
void preencher(int M[L][C], int l, int c){
	int i, j;
	for(i = 0; i < l; i++){
		printf("1-Maticula, 2-Nota Prova, 3-Nota Trabalhos\n");
		for(j = 0; j < c-1; j++){
			printf("%d: ", j + 1);
			scanf("%d", &M[i][j]);
		}
	}
}
void mostrar(int M[L][C], int l, int c){
	int i, j;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++)
			printf("%d\t", M[i][j]);
		printf("\n");
	}
}
void notaFinal(int M[L][C], int l){
	int i;
	for(i = 0; i < l; i++)
		M[i][C-1] = M[i][1] + M[i][2];
}
void maiorNota(int M[L][C], int l, int c){
	int i, maior = M[0][c-1];
	for(i = 0; i < l; i++)
		if(maior < M[i][c-1])
			maior = M[i][c-1];	
	printf("maior nota: %d\n", maior);
}
void media(int M[L][C], int l, int c){
	int i, soma = 0, cont = 0;
	float media;
	for(i = 0; i < l; i++){
		soma += M[i][c-1];
		cont++;
	}
	media = soma/cont;
	printf("soma: %f\n", media);
}