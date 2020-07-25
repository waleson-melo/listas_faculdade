/* Questão 4. Crie um algoritmo para calcular e apresentar o valor do volume de um lata de óleo,
utilizando a seguinte fórmula: volume = PI * raio2 * altura. Para isso, leia os dados necessários para
realizar o cálculo, armazenando-os em variáveis. Além disso, é necessário atribuir o valor 3.14 à
variável PI. */
#include <stdio.h>
#define PI 3.14
int main(){
    float volume, raio, altura;

    printf("raio: ");
    scanf("%f", &raio);
    printf("altura: ");
    scanf("%f", &altura);
    
    volume = PI * raio * altura;

    printf("volume da lata de oleo: %.2f\n", volume);

    return 0;
}