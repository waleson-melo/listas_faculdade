#include<stdio.h>

// Prototipo da funçao
int potencia(int base, int expoente);

int main()
{
    int base, expoente, result;

    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente: ");
    scanf("%d", &expoente);

    result = potencia(base, expoente);

    printf("%d elevado a %d = %d\n", base, expoente, result);

    return 0;
}

int potencia(int base, int expoente)
{
    int i, pot = 1;
    for(i = 0; i < expoente; i++)
        pot *= base;
    
    return pot;
}