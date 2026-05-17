#include <stdio.h>

int main() {
    float num1, num2, num3, maior, soma, mp;
    printf("Digite tres números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    maior = num1;
    if (num2 > maior)
      maior = num2;
    if (num3 > maior)
      maior = num3;
    soma = num1 + num2 + num3;
    
    mp = (maior*5 + (soma - maior)*2.5) / (5 + 2.5 + 2.5);
    printf("a média ponderada é %.2f", mp);
    return 0;
}