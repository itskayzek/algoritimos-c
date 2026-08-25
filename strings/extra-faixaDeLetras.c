#include <stdio.h>
#define maxTam 201

int main() {
    int icont, jcont, tam, consecutivo, ligacao;
    char primeiroDaFaixa, texto[maxTam];
    tam = 0;
    ligacao = 0;
    consecutivo = 0;
    
    fgets (texto, maxTam, stdin);
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      if (texto[icont] != '\n')
        tam++;
      else
        texto[icont] = '\0';
    }
    
    for (icont = 0; icont < tam - 1; icont++){
      for (jcont = icont + 1; texto[jcont] != '\0'; jcont++){
        if (texto[icont] > texto[jcont]){
          ligacao = texto[icont];
          texto[icont] = texto[jcont];
          texto[jcont] = ligacao;
        }
      }
    }
    
    for (icont = 0; texto[icont] != '\0'; icont++){
      if (texto[icont] != ' '){
        
        if(texto[icont] + 1 == texto[icont + 1]){
          consecutivo++;
          if (consecutivo == 1)
            primeiroDaFaixa = texto[icont];
        }
        else if (texto[icont] == texto[icont + 1]){
        }
        else if (consecutivo > 0){
          printf("%c:%c ", primeiroDaFaixa, texto[icont]);
          consecutivo = 0;
        }
        else
          printf("%c:%c ", texto[icont], texto[icont]);
      }
    }
    
    return 0;
}