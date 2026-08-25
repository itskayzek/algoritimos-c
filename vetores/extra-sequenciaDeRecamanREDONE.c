#include <stdio.h>
#define maxTam 20
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, repetido, vetor[maxTam];
    
    vetor[0] = 0;
    printf("%i\t", vetor[0]);
    for (icont = 1; icont < maxTam; icont++){
      repetido = FALSE;
      for (jcont = 0; jcont < icont; jcont++){
        if (vetor[jcont] == (vetor[icont - 1] - icont)){
          repetido = TRUE;
          break;
        }
      }
      
      if ((vetor[icont - 1] - icont) > 0 && repetido == FALSE)
        vetor[icont] = vetor[icont - 1] - icont;
      else
        vetor[icont] = vetor[icont - 1] + icont;
      
      printf("%i\t", vetor[icont]);
    }
    
    return 0;
}