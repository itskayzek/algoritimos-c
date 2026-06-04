#include <stdio.h>

int main() {
    int somaDados, contador1, contador2;
    scanf("%i", &somaDados);
    
      for (contador1 = 1; contador1 <= 6; contador1++) {
        for (contador2 = 1; contador2 <= 6; contador2++) {        
          if (somaDados == (contador1 + contador2))
            printf("%i %i\n", contador1, contador2);
        }
      }
  return 0;
}