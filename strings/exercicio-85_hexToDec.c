#include <stdio.h>
#define maxTam 52

int main() {
    int cont, decimal, base, vetorDec[maxTam];
    char vetorHex[maxTam];
    base = 1;
    decimal = 0;
    
    printf("Digite um valor em hexadecimal: ");
    fgets (vetorHex, maxTam, stdin);
    
    for (cont = 0; vetorHex[cont] != '\0'; cont++)
      vetorDec[cont] = vetorHex[cont];
    cont -= 2;
    
    while (cont >= 0){
      switch (vetorDec[cont]){
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
          vetorDec[cont] -= 55;
        break;
        
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
          vetorDec[cont] -= 87;
        break;
        
        default:
          vetorDec[cont] -= 48;
      }
      vetorDec[cont] *= base;
      decimal += vetorDec[cont];
      
      cont--;
      base *= 16;
    }
    
    printf("sua representacao em decimal é: %i", decimal);
    
    return 0;
}