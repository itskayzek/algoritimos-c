#include <stdio.h>

int main() {
    int valorSolicitado, cem, cinquenta, vinte, dez, cinco, dois, um;
    printf("Digite o valor a ser sacado: ");
    scanf("%i", &valorSolicitado);
    cem = valorSolicitado / 100;
    cinquenta = (valorSolicitado % 100) / 50;
    vinte = ((valorSolicitado % 100) % 50) / 20;
    dez = (((valorSolicitado % 100) % 50) % 20) / 10;
    cinco = ((((valorSolicitado % 100) % 50) % 20) % 10) / 5;
    dois = (((((valorSolicitado % 100) % 50) % 20) % 10) % 5) / 2;
    um = (((((valorSolicitado % 100) % 50) % 20) % 10) % 5) % 2;    
    printf("seriam retiradas %i nota(s) de cem \n%i nota(s) de cinquenta \n%i nota(s) de vinte \n%i nota(s) de dez \n%i nota(s) de cinco \n%i nota(s) de dois \ne %i moeda(s) de um real", cem, cinquenta, vinte, dez, cinco, dois, um);
    return 0;
}

// ALTERNATIVA DE LEGIBILIDADE:
//     cem = valorSolicitado / 100;
//     valorSolicitado %= 100;
    
//     cinquenta = valorSolicitado / 50;
//     valorSolicitado %= 50;
    
//     vinte = valorSolicitado / 20;
//     valorSolicitado %= 20;
    
//     dez = valorSolicitado / 10;
//     valorSolicitado %= 10;
    
//     cinco = valorSolicitado / 5;
//     valorSolicitado %= 5;
    
//     dois = valorSolicitado / 2;
    
//     um = valorSolicitado %= 2;