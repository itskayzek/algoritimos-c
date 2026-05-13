#include <stdio.h>

int main() {
    float num1, area, perimetro;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &num1);
    area = num1*num1;
    perimetro = num1*4;
    printf("a área do quadrado é %.2f e o perimetro é %.2f", area, perimetro);
    return 0;
}