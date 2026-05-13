#include <stdio.h>

int main() {
    float valorMs, valorKmh;
    printf("Digite um valor em metro por segundo: ");
    scanf("%f", &valorMs);
    valorKmh = valorMs*3.6;
    printf("O valor em quilometros por hora é: %.2f", valorKmh);
    return 0;
}