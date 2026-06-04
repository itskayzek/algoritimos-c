#include <stdio.h>

int main() {
    int termoPrevio, termoAtual, termoN, proxTermo, contador;
    scanf("%i %i %i", &termoPrevio, &termoAtual, &termoN);
    printf("\n\n%i\n%i\n", termoPrevio, termoAtual);
    
    proxTermo = 0;
    for (contador = 3; contador <= termoN; contador++){
      if (contador % 2 == 0)
        proxTermo = termoAtual - termoPrevio;
      else if (contador % 2 > 0)
        proxTermo = termoAtual + termoPrevio;
      printf("%i\n", proxTermo);
      
      termoPrevio = termoAtual;
      termoAtual = proxTermo;
    }
    
    return 0;
}