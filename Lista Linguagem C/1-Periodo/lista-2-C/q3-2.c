/*
Questão 3. Escreva um programa que receba dois números e um sinal. Calcule e mostre resultado
de acordo com a operação matemática definida pelo sinal.
“+” Soma, “-” Subtração, “*” Multiplicação e “/” Divisão
*/
#include <stdio.h>
int main(){
    int num1, num2,result;
    char op;
    
    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite outro numero: ");
    scanf("%d", &num2);
    fflush(stdin);
    printf("soperacao(-,+,*,/): ");
    scanf("%s", &op);

    if(op == '-'){
        result = num1 - num2;
        printf("resultado: %d\n", result);
    } else{
        if(op == '+'){
            result = num1 + num2;
            printf("resultado: %d\n", result);
        } else{
            if(op == '*'){
                result = num1 * num2;
            } else{
                if (op == '/'){
                    result = num1 / num2;
                } 
            }
        }
    }

    return 0;
}