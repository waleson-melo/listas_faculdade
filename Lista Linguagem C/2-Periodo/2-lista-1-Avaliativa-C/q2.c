#include <stdio.h>

#define T 20

int main()
{
    int i, escap = 0, contDiv = 0, quantPri = 0, num = 2, vet[T];

    while(escap != 1){
        for(i = 2; i <= num / 2; i++){
            if(num % i == 0){
                contDiv++;
                break;
            }
        }

        if(contDiv == 0){
            vet[quantPri] = num;
            contDiv = 0;
            quantPri++;
        }else{
            contDiv = 0;
        }

        if(quantPri == T){
            escap = 1;
        }

        num++;

    }

    for(i = 0; i < T; i++)
        printf("%d\n", vet[i]);

}