#include <stdio.h>

int main() {
    float l1, l2, l3, perimetro;
    printf("Digite os 3 lados do triangulo: \n");
    scanf("%f %f %f", &l1, &l2, &l3);
    perimetro = l1 + l2 + l3;
    printf("o perimetro do triangulo é: %.2f", perimetro);
    return 0;
}