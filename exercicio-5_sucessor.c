#include <stdio.h>

int main() {
    int numero, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    sucessor = numero + 1;
    printf("o sucessor de %i é %i", numero, sucessor);
    return 0;
}