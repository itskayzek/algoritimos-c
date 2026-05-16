#include <stdio.h>

int main() {
    float a, b, x;
    printf("Digite os valores de a e b para uma equação do 1° grau: ");
    scanf("%f %f", &a, &b);
    x = -b/a;
    printf("Nessa equação, o valor de x é: %.2f", x);
    return 0;
}