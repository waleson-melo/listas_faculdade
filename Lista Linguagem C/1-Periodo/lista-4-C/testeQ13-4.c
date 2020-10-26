// encontrar o maior e o menor valor usando com vetor
#include <stdio.h>
#define t 3
int main(){
    int n[t], i, maior, menor, pos = 0;

    for(i=0;i<t;i++){
        printf("num: ");
        scanf("%d", &n[i]);
    }
    maior = n[0];
    for(i=0;i<t;i++){
        menor = n[pos];       
        if(i + 1 <= t){
            if(n[i]>maior){
                maior = n[i];
            }
            if(n[i]<menor){
                pos = i;
                menor = n[i];
            }
        }
    }
    printf("maior: %d\nmenor: %d\n", maior, menor);

    return 0;
}