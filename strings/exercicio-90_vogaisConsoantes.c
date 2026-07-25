#include <stdio.h>
#define maxTam 202

int main() {
    int icont, controle, jcont;
    char texto[maxTam], vogCons[maxTam];
    jcont = 0;
    controle = 0;
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      switch (texto[icont]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          vogCons[jcont] = texto[icont];
          jcont++;
      }
    }
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      switch (texto[icont]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          break;
          
        default:
          if ((texto[icont] >= 'a' && texto[icont] <= 'z') || (texto[icont] >= 'A' && texto[icont] <= 'Z')){
            vogCons[jcont] = texto[icont];
            jcont++;
          }
      }
    }
    
    vogCons[jcont] = '\0';
    printf("%s", vogCons);
    
    return 0;
}