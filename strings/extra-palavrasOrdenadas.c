#include <stdio.h>
#define maxTam 50
#define TRUE 1
#define FALSE 0

int main() {
    int icont, ordenada;
    char palavra[maxTam];
    ordenada = TRUE;
    
    printf("Digite uma palavra: ");
    fgets (palavra, maxTam, stdin);
    
    if (palavra[0] >= 'A' && palavra[0] <= 'Z')
      palavra[0] += 32;
      
    for (icont = 1; palavra[icont]; icont++){
      if (palavra[icont] >= 'A' && palavra[icont] <= 'Z')
      palavra[icont] += 32;
      
      if (palavra[icont] < palavra[icont - 1] && palavra[icont] != '\n'){
        ordenada = FALSE;
        break;
      }
    }
    
    if (ordenada)
      printf("Essa é uma palavra ordenada!");
    else
      printf("Essa palavra não é ordenada.");
    
    return 0;
}