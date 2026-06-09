#include <stdio.h>

int main() {
    int contador, pares, vetor[10] = {9, 61, 33, 88, 17, 54, 3, 79, 95, 26};
    pares = 0;
    
    for (contador = 0; contador < 10; contador++){
      if (vetor[contador] % 2 == 0)
        pares++;
    }
    printf("o array tem %i pares", pares);
    
    return 0;
}