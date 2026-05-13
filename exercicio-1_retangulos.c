#include <stdio.h>

int main() {
    float num1, num2, area, perimetro;
    printf("Digite a base do retangulo: ");
    scanf("%f", &num1);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &num2);
    area = num1*num2;
    perimetro = num1*2 + num2*2;
    printf("a área é %f\ne o perimetro é %f", area, perimetro);
    return 0;
}
