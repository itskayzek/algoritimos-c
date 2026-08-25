#include <stdio.h>
#define maxTam 200
#define alfaTam 26

int main() {
    int icont, alfabeto[alfaTam] = {0};
    char letra, texto[maxTam];
    
    printf("Digite seu texto: ");
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont]; icont++){
      if (texto[icont] >= 'a' && texto[icont] <= 'z')
        alfabeto[texto[icont] - 'a']++;
      else if (texto[icont] >= 'A' && texto[icont] <= 'Z')
        alfabeto[texto[icont] - 'A']++;
    }
    
    for (letra = 'A', icont = 0; letra <= 'Z'; letra++, icont++){
      if (alfabeto[icont] > 0)
        printf("%c(%i)\n", letra, alfabeto[icont]);
    }
    
    return 0;
}