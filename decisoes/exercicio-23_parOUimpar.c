#include <stdio.h>

int main() {
    int numero, resto;
    printf("Digite um número: ");
    scanf("%i", &numero);
    resto = numero % 2;
    if (resto == 0)
      printf("Esse número é par!");
    else
      printf("Esse número é ímpar!");
    return 0;
}