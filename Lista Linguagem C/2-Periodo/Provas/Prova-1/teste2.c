#include <stdio.h>
#include <stdlib.h>


int main(){

    int tl = 10,tc=2;
    int l,c,v[tl][tc],lat,temp,menort,lmenor,totn=0,ctotn=0,ctots=0,tots=0; //totn = total de norte e ctotn quantidade 
    float medianorte,mediaSul;

        for(l=0;l<tl;l++){
            temp = -50 + ( rand() % 50 ); 
            scanf("%d",&temp);
            v[l][1] = temp;
        }



        for(l=0;l<tl;l++){
                lat = -91 + ( rand() % 90 ); 
                scanf("%d",&lat);
                v[l][0] = lat;
        }


        for(l=0;l<tl;l++){
            for(c=0;c<tc;c++){
                printf("%d ",v[l][c]);
            }
            printf("\n");
        }
        menort = v[0][1]; 

         for(l=0;l<tl;l++){
            for(c=0;c<tl;c++){
                if(v[c][1]<menort){
                    menort = v[l][1];
                    lmenor = v[l][0];
                }
            }
            printf("\n");
        }

        printf("Menor temperatura: %d ",menort);
        printf("Sua latitude : %d ",lmenor);


        for(l=0;l<tl;l++){
            if(v[l][0] >= 1 && v[l][0]<=90 ){
                totn += v[l][1];
                ctotn +=1;
            }
        }

        medianorte = totn/ctotn;
        printf("Média de temperatura nos hemisferios Norte: %d ",medianorte);

    return 0;
}
