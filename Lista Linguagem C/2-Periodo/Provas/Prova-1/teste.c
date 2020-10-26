#include <stdio.h>
#include <stdlib.h>



int main(){

    int t=5;
    int v[t][t],c,l,x,i,k=0,maiorq,totalq;

    for(l=0;l<t;l++){
       for(c=0;c<t;c++){
           x = 1 + rand () % 100;
           scanf("%d",&x); 
           v[l][c] = x;
       }
    }

    for(l=0;l<t;l++){
       for(c=0;c<t;c++){
           printf("%d  ",v[l][c]);
       }
       printf("\n");
    }
    maiorq = 0;





    return 0;

}