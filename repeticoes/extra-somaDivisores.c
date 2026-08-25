#include <stdio.h>

int main() {
    int icont, jcont, somaDiv, numero;
    
    scanf("%i", &numero);
    
    for (icont = 1; icont <= numero; icont++){
      somaDiv = 0;
      for (jcont = 1; jcont <= icont; jcont++){
        if (icont % jcont == 0)
          somaDiv += jcont;
      }
      printf("%i\t", somaDiv);
    }
    
    return 0;
}