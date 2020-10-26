#include<stdio.h>
#include<stdlib.h>

#define T 4

void preencher(int M[T][T], int t);
void mostrar(int M[T][T], int t);
void maior(int M1[T][T], int M2[T][T], int M3[T][T], int t);

int main()
{
	int M1[T][T], M2[T][T], M3[T][T], i, j;
	
	// Preenchendo as Matrizes
	preencher(M1, T);
	preencher(M2, T);

	// Mostrando as Matrizes
	mostrar(M1, T);
	mostrar(M2, T);
	
	maior(M1, M2, M3, T);
	mostrar(M3, T);
	
}

// FUNÇÕES
void preencher(int M[T][T], int t){
	int i, j;
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			M[i][j] = 1 + rand() % 50;
		}
	}
}
void mostrar(int M[T][T], int t){
	int i, j;
	printf("========================\n");
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}
void maior(int M1[T][T], int M2[T][T], int M3[T][T], int t){
	int i, j;
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			if(M1[i][j] >= M2[i][j]){
				M3[i][j] = M1[i][j];
			} else{
				M3[i][j] = M2[i][j];
			}
		}
	}
}
