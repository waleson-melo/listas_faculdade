#include<stdio.h>
#include<stdlib.h>

#define T 100

int main()
{
    int A[T], B[T], contDiv = 0, quantPri = 0, num, i, j;

    // Preenchendo o vetor
    for(i = 0; i < T; i++){
        A[i] = 1 + rand() % 100;
        printf("%d\t", A[i]);
    }

    for(i = 0; i < T; i++){
        num = A[i];

        for(j = 2; j <= num / 2; j++)
            if(num % j == 0)
                contDiv++;
            
        if(contDiv == 0){
            B[quantPri] = num;
            quantPri++;
        }else{
            contDiv = 0;
        }
        
    }

    printf("\nNumeros primos:\n");
    for(i = 0; i < quantPri; i++)
        printf("%d\t", B[i]);

}