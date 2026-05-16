#include <stdio.h>

int main() {
    int prestacao1, prestacao2;
    float entrada, mercadoria;
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &mercadoria);
    prestacao1 = mercadoria/3;
    prestacao2 = mercadoria/3;
    entrada = mercadoria-(prestacao1+prestacao2);
    printf("O pagamento a ser efetuado de entrada é R$%.2f\n\nO valor da primeira prestação é R$%i.00\nE o valor da segunda prestação é R$%i.00", entrada, prestacao1, prestacao2);
    return 0;
}