#include <stdio.h>

int main() {
    int contador, anterior, atual, proximo, numN;
    scanf("%i", &numN);
    anterior = 0;
    atual = 1;
    proximo = 0;
    printf("%i\n", anterior);
    
    if (numN > 0){
      printf("%i\n", atual);
    
      for (contador = 0; (atual + anterior) <= numN; contador++){
        proximo = atual + anterior;
        printf("%i\n", proximo);
        anterior = atual;
        atual = proximo; 
      }
    }
    return 0;
}

// OBS: dava para fazer o corpo do for assim:
// atual += anterior;
// anterior -= atual;