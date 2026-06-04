#include <stdio.h>

int main() {
    int contador;
    float fatorial, numN, somaFatorial;
    scanf("%f", &numN);
    
    fatorial = 1;
    somaFatorial = 1;    
    for (contador = 1; contador <= numN; contador++){
      fatorial *= contador;
      somaFatorial += (1.0/fatorial);
      printf("%f\n", somaFatorial);
    }
    return 0;
}