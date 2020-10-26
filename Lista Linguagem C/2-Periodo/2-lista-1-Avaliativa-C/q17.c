#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int main(){
    int vet[MAX], i, j, k, num, x, pos = -1, quantN = 0;
    // Preenchendo e mostrando o vetor
    printf("Vetor: ");
    for(i = 0; i < MAX; i++){
        vet[i] = 1 + rand() % 10000;
        printf("%d\t", vet[i]);
    }
    // Ordenando
    for (i = 1; i < MAX; i++) {
        x = vet[i];
        for (j = i - 1; j >= 0 && vet[j] > x; j--)
            vet[j + 1] = vet[j];
        vet[j + 1] = x;
    }
   // Mostrando o vetor
    printf("\nVetor: ");
    for(i = 0; i < MAX; i++){
        printf("%d\t", vet[i]);
    }
    // Inserindo valores no vetor
    for(i = 0; i < MAX; i++){
        printf("\nValor que vc quer inserir: ");
        scanf("%d", &num);
        vet[quantN] = num;
        quantN++;
        for(j = 1; j < quantN; j++){
            x = vet[j];
            for (k = j - 1; k >= 0 && vet[k] > x; k--)
                vet[k + 1] = vet[k];
            vet[k + 1] = x;
        }
        // Mostrando o vetor
        printf("\nVetor: ");
        for(j = 0; j < quantN; j++){
            printf("%d\t", vet[j]);
        }
    }
    // Retirando um valor
    for(i = 0; i < MAX; i++){
        printf("\nQual valor q vc quer tirar: ");
        scanf("%d", &num);
        for(j = 0; j < MAX; j++)
            if(vet[j] == num){
                pos = j;
                j = MAX;
            }
        if(pos != -1){
            if(pos >= 0 && pos < MAX - 1){
                for(j = pos; j < MAX - 1; j++)
                    vet[j] = vet[j + 1];
            }else{
                vet[MAX - 1] = -1;
            }
        }
        // Mostrando o vetor
        printf("\nVetor: ");
        for(j = 0; j < MAX; j++){
            printf("%d\t", vet[j]);
        }
    }
} 