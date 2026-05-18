#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    if (numero > 0)
      printf("Esse número é positivo!");
    else if (numero < 0)
      printf("Esse número é negativo!");
    else
      printf("Esse número é 0!");
    return 0;
}