/*
Questão 9. Um triângulo é uma figura geométrica de três lados, onde cada um é menor do que a soma dos outros
dois. Triângulo equilátero possui três lados iguais. Triângulo isóscele possui dois lados iguais. Triângulo escaleno
possui todos os lados diferentes. Dados três valores A, B e C, verificar se eles podem ser os comprimentos de um
triângulo equilátero, isóscele ou escaleno. Informar quando não compuserem nenhum triângulo.
*/
#include <stdio.h>
int main(){
    float a, b, c, soma;

    printf("lado 1: ");
    scanf("%f", &a);
    printf("lado 2: ");
    scanf("%f", &b);
    printf("lado 3: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && c + b > a){
        if(a != b && a != c && b != c){
            printf("Triangulo escaleno\n");
        } else{
            if(a == b && a == c & b == c){
                printf("Triangulo equilatero\n");
            } else{
                if(a == b && a != c && b != c){
                    printf("Triangulo isosceles\n");
                } else{
                    if(a == c && a != b && c != b){
                        printf("Triangulo isosceles\n");
                    } else{
                        if(b == c && b != a && c != a){
                            printf("Triangulo isosceles\n");
                        }
                    }
                }
            }
        }
    } else{
        printf("nao eh um triangulo\n");
    }

    return 0;
}