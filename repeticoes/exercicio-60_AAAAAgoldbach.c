#include <stdio.h>

int main() {
    int numero, numPar, divisor, numero2;
    numero2 = 0;
    
    for (numPar = 500; numPar <= 1000; numPar += 2){
      printf("%i ", numPar);
      numero = 2;
      while (numero + numero2 != numPar){
      
        for (divisor = 2; divisor < numero; divisor++){
          if (numero % divisor == 0){
            numero++;
            divisor = 2;
          }
        }
        numero2 = numPar - numero;
        for (divisor = 2; divisor < numero2; divisor++){
          if (numero2 % divisor == 0){
            numero++;
            numero2 = 0;
          }
        }
      }
      printf("= %i + %i\n", numero, numero2);
    }
    
    return 0;
}