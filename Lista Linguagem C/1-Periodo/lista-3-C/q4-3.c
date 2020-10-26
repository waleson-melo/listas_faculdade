/* Questão 4. O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade de cada item
que você consumiu e calcule a conta final.
Hambúrguer................. R$ 3,00
X-burguer..................... R$ 2,50
Fritas............................ R$ 2,50
Refrigerante................. R$ 1,00
Milkshake..................... R$ 3,00 */
#include <stdio.h>
int main(){
    int qh, qx, qf, qr, qm;
    float total;

    printf("quantidade de hamburguer: ");
    scanf("%d", &qh);
    printf("quantidade x-burguer: ");
    scanf("%d", &qx); 
    printf("quantidade fritas: ");
    scanf("%d", &qf); 
    printf("quantidade refrigerante: ");
    scanf("%d", &qr); 
    printf("quantidade milkshake: ");
    scanf("%d", &qm); 

    total = qf * 2.5 + qh * 3 + qm * 3 + qr * 1 + qx * 2.5;

    printf("conta final: %.2f\n", total);

    return 0;
}