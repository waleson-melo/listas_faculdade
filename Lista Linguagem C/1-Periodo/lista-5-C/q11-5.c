/* Questão 11. Apresentar os resultados de uma tabuada (multiplicação) de um número qualquer. Esta deverá ser
impressa no seguinte formato: Considerando como exemplo o fornecimento do número 2 :
2X1=2
2X2=4
2X3=6
2X4=8
2 X 5 = 10
(...)
2 X 10 = 20 */
#include <stdio.h>
int main(){
    int num, i;

    for(i=1;i<11;i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
