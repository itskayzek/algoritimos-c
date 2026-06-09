#include <stdio.h>

int main() {
    int contador, contador2, vetor2[10], vetor1[10] = {2, 18, 5, 11, 0, 16, 9, 13, 4, 17};
    contador2 = 0;
    
    for (contador = 9; contador >= 0; contador--){
      vetor2[contador2] = vetor1[contador];
      printf("%i ", vetor2[contador2]);
      contador2++;
    }
    
    return 0;
}