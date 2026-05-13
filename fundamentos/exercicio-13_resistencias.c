#include <stdio.h>

int main() {
    float r1, r2, r3, req;
    printf("Digite o valor das resistencias em sequencia: ");
    scanf("%f %f %f", &r1, &r2, &r3);
    req = (r1*r2)/(r1+r2)+r3;
    printf("A resistencia equivalente desse circuito é: %.2f", req);
    return 0;
}