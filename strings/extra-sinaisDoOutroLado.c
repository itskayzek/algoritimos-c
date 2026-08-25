#include <stdio.h>
#define maxTam 202
#define TRUE 1
#define FALSE 0

int main() {
    int icont, jcont, ehAlien; //str;
    char mensagem[maxTam], alfabetoAlien[maxTam];
    ehAlien = FALSE;
    
    fgets (alfabetoAlien, maxTam, stdin); // se passar do maxtam-2 vai quebrar, como solucao tem o codigo comentado abaixo
    fgets (mensagem, maxTam, stdin);
    
//     icont = 0;
//     while ((str = getchar()) != '\n' && str != EOF && icont < maxTam - 1){
//       mensagem[icont] = str;
//       icont++;
//     }
//     mensagem[icont] = '\0';
    
    for (icont = 0; mensagem[icont] != '\n' && mensagem[icont] != '\0'; icont++){
      ehAlien = FALSE;
      for (jcont = 0; alfabetoAlien[jcont] != '\n' && alfabetoAlien[jcont] != '\0'; jcont++){
        if (mensagem[icont] == alfabetoAlien[jcont]){
          ehAlien = TRUE;
          break;
        }
      }
      if (ehAlien == FALSE)
        break;
    }
    
    if (ehAlien)
      printf("Essa mensagem pode ter sido escrita por aliens!");
    else
      printf("Essa mensagem não faz parte do alfabeto alienígena.");
    
    return 0;
}