#include <stdio.h>
#define maxExpMarsenne 20

int main() {
    int controle, divisor, cont, numMarsenne, expoente, base;
    base = 2;
    
    for (expoente = 1; expoente <= maxExpMarsenne; expoente++){
      numMarsenne = 2;
      for (cont = 0; cont < expoente - 1; cont++)
        numMarsenne *= base;
      numMarsenne--;
      
      controle = 0;
      for (divisor = 2; divisor < numMarsenne; divisor++)
        if (numMarsenne % divisor == 0)
          controle++;
      
      if (controle == 0)
        printf("expoente de marsenne: %i\nnumero de marsenne: %i\n\n", expoente, numMarsenne);
      }
    // acima de 31 seria overflow
    return 0;
}