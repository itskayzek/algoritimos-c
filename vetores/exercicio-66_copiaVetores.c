#include <stdio.h>

int main() {
    int contador, vetor2[10], vetor1[10] = {2, 18, 5, 11, 0, 16, 9, 13, 4, 17};
    
    for (contador = 0; contador < 10; contador++){
      vetor2[contador] = vetor1[contador];
      printf("%i ", vetor2[contador]);
    }
    
    return 0;
}