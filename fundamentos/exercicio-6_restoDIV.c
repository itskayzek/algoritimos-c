#include <stdio.h>

int main() {
    int num1, num2, resto, quociente;
    printf("Digite 2 números que farão parte da divisão: ");
    scanf("%i %i", &num1, &num2);
    quociente = num1 / num2;
    resto = num1 % num2;
    printf("O resultado da divisão entre %i e %i é %i,\ne o seu resto é %i", num1, num2, quociente, resto);
    return 0;
}