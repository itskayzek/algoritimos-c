#include <stdio.h>

int main() {
    int binario1, binario2, binario3, binario4, binario5, binario6, binario7, divisor2, divisor3, divisor4, divisor5, divisor6, divisor7, divisor8, resultado, inteiro;
    printf("Digite um número inteiro <= 128: ");
    scanf("%i", &inteiro);
    divisor2 = inteiro/2;
    binario1 = inteiro%2;
    
    divisor3 = divisor2/2;
    binario2 = divisor2%2;

    divisor4 = divisor3/2;
    binario3 = divisor3%2;

    divisor5 = divisor4/2;
    binario4 = divisor4%2;

    divisor6 = divisor5/2;
    binario5 = divisor5%2;
    
    divisor7 = divisor6/2;
    binario6 = divisor6%2;

    divisor8 = divisor7/2;
    binario7 = divisor7%2;

    resultado = divisor8*10000000 + binario7*1000000 + binario6*100000 + binario5*10000 + binario4*1000 + binario3*100 + binario2*10 + binario1*1;
    printf("Esse número em binário é: %08i", resultado);
    return 0;
}