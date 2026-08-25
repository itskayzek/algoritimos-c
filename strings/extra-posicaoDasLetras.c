#include <stdio.h>
#define maxTam 200
#define alfaTam 26

int main() {
    int icont, alfabeto[alfaTam];
    char letra, texto[maxTam];
    
    printf("Digite seu texto: ");
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; icont < alfaTam; icont++)
      alfabeto[icont] = -1;
    
    for (icont = 0; texto[icont]; icont++){
      if (texto[icont] >= 'a' && texto[icont] <= 'z'){
        if (alfabeto[texto[icont] - 'a'] < 0)
          alfabeto[texto[icont] - 'a'] = icont;
      }
      else if (texto[icont] >= 'A' && texto[icont] <= 'Z'){
        if (alfabeto[texto[icont] - 'A'] < 0)
          alfabeto[texto[icont] - 'A'] = icont;
      }
    }
    
    for (letra = 'A', icont = 0; letra <= 'Z'; letra++, icont++){
      if (alfabeto[icont] >= 0)
        printf("%c(%i)\t", letra, alfabeto[icont]);
    }
    
    return 0;
}