#include <stdio.h>

int main() {
    int binario1, binario2, binario3, binario4, binario5, divisor2, divisor3, divisor4, divisor5, divisor6, resultado, inteiro;
    printf("Digite um número inteiro <= 63: ");
    scanf("%i", &inteiro);
    divisor2 = inteiro/2;  //o resultado da divisao do inteiro por 2
    binario1 = inteiro%2;  //o resto dessa divisao é binario1
    
    divisor3 = divisor2/2;  //o resultado da primeira divisao agr é dividido por 2
    binario2 = divisor2%2;  //o resto dessa divisao é binario2

    divisor4 = divisor3/2;  //o resultado da ultima divisao agr é dividido por 2
    binario3 = divisor3%2;  //o resto dessa divisao é binario3

    divisor5 = divisor4/2;  //o resultado da ultima divisao agr é dividido por 2
    binario4 = divisor4%2;  //o resto dessa divisao é binario4

    divisor6 = divisor5/2;  //o resultado da ultima divisao agr é dividido por 2
    binario5 = divisor5%2;  //o resto dessa divisao é binario5

    resultado = divisor6*100000 + binario5*10000 + binario4*1000 + binario3*100 + binario2*10 + binario1*1;
    printf("Esse número em binário é: %08i", resultado);
    return 0;
}