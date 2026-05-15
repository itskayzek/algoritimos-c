#include <stdio.h>

int main() {
    int inteiro, resultado, centena, dezena, unidade;
    printf("Escreva um número inteiro de 3 digitos: ");
    scanf("%i", &inteiro);
    centena = inteiro/100;
    dezena = (inteiro%100)/10;
    unidade = (inteiro%100)%10;
    resultado = unidade*100 + dezena*10 + centena*1;
    printf("O inverso do número informado é: %03i", resultado);
    return 0;
}