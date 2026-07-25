#include <stdio.h>
#define maxTam 202
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, contido, idxOriginal;
    char texto1[maxTam], texto2[maxTam];
    idxOriginal = 0;
    jcont = 0;
    contido = FALSE;
    
    fgets (texto1, maxTam, stdin);
    fgets (texto2, maxTam, stdin);
    
    for (icont = 0; texto1[icont] != '\n' && texto2[jcont] != '\n'; icont++){
      if (texto1[icont] == texto2[jcont]){
        contido = TRUE;
        idxOriginal = icont;
        
        while (texto2[jcont] != '\n'){
          if (texto1[icont] != texto2[jcont]){
            icont = idxOriginal;
            jcont = 0;
            contido = FALSE;
            break;
          }
          icont++;
          jcont++;
        }
      }
    }
    
    if (contido == TRUE)
      printf("A primeira string contém a segunda!");
    else
      printf("A primeira string não contém a segunda!");
    
    return 0;
}    