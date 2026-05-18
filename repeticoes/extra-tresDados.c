#include <stdio.h>

int main() {
    int somaDados, contador1, contador2, contador3;
    scanf("%i", &somaDados);
    
    for (contador1 = 1; contador1 <= 6; contador1++) {
      for (contador2 = 1; contador2 <= 6; contador2++) {
        for (contador3 = 1; contador3 <= 6; contador3++) {        
          if (somaDados == (contador1 + contador2 + contador3))
            printf("%i %i %i\n", contador1, contador2, contador3);
        }
      }
    }
  return 0;
}
