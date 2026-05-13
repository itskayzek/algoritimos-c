#include <stdio.h>

int main() {
    float raio, volume, altura;
    printf("Digite o raio e a altura do cilindro: ");
    scanf("%f %f", &raio, &altura);
    volume = 3.14*raio*raio*altura;
    printf("O volume é: %.2f", volume);
    return 0;
}