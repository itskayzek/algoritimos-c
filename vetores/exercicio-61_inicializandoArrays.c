#include <stdio.h>

int main() {
    int contador, vetor[20] = {0};
    
    for (contador = 0; contador < 20; contador++)
      printf("elemento %i na posicao %i\n", vetor[contador], contador);
    
    return 0;
}