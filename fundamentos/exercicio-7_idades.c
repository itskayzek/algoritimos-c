#include <stdio.h>

int main() {
    int idadeDias, anos, meses, dias;
    printf("Digite sua idade em dias: ");
    scanf("%i", &idadeDias);
    anos = idadeDias / 365;
    meses = (idadeDias % 365) / 30;
    dias = (idadeDias % 365) % 30;
    printf("Aproximadamente, voce tem %i anos, %i meses e %i dias", anos, meses, dias);
    return 0;
}
// esse resultado é aproximado, n tem como fazer certinho?
// // pq desse jeito n conta ano bissexto e as variacoes dos dias nos meses.