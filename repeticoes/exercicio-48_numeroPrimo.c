#include <stdio.h>

int main() {
    int contador, numN, numsDivididos;
    scanf("%i", &numN);
    contador = 0;
    
    if (numN == 0 || numN == 1)
      contador++;
    
    for (numsDivididos = 2; numsDivididos < numN; numsDivididos++){
      if (numN % numsDivididos == 0 && numN > 0)
        contador++;
    }
    
    if (contador > 0)
      printf("%i não é um número primo!\n", numN);
    else
      printf("%i é um número primo!\n", numN);
    
    return 0;
}