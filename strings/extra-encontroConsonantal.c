#include <stdio.h>
#define maxTam 257

int main() {
    int icont, consoantesCont, encConsCont;
    char texto[maxTam];
    consoantesCont = 0;
    encConsCont = 0;
    
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      if ((texto[icont] >= 'B' && texto[icont] <= 'Z') || (texto[icont] >= 'b' && texto[icont] <= 'z')){
        switch (texto[icont]){
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            consoantesCont = 0;
          break;
        
          case 'E':
          case 'I':
          case 'O':
          case 'U':
            consoantesCont = 0;
          break;
          
          default:
            consoantesCont++;
            if (consoantesCont == 2)
              encConsCont++;
        }
      }
      else
        consoantesCont = 0;
    }
    
    printf("O número de encontros consonantais foi:\n%i", encConsCont);
    
    return 0;
}
