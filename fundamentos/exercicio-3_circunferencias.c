#include <stdio.h>

int main() {
    float raio, area, perimetro;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    area = 3.14*raio*raio;
    perimetro = 3.14*raio*2;
    printf("Aproximadamente, a área da circunferencia é %.2f e o perimetro é %.2f", area, perimetro);
    return 0;
}