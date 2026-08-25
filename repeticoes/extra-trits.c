#include <stdio.h>
#define maxTam 512
#define TRUE 1 
#define FALSE 0

int main() {
    int icont, jcont, kcont, lcont, parteContigua, tamMaior, parentes;
    float tamMenor, minContigua, valorP;
    char codGenetico1[maxTam], codGenetico2[maxTam];
    parteContigua = 1;
    parentes = FALSE;
    
    printf("Digite o primeiro código genético: ");
    for (icont = 0; codGenetico1[icont - 1] != '0' && icont < maxTam; icont++)
      scanf(" %c", &codGenetico1[icont]);
    tamMenor = icont - 1;
    
    printf("Digite o segundo código genético: ");
    for (icont = 0; codGenetico2[icont - 1] != '0'&& icont < maxTam; icont++)
      scanf(" %c", &codGenetico2[icont]);
    icont--;
    
    printf("Digite seu critério de parentesco (%): ");
    scanf("%f", &valorP);
    
    if (icont < tamMenor){ // os dois tamanhos estao no 0
      tamMaior = tamMenor;
      tamMenor = icont;
    }
    else
      tamMaior = icont;
    
    minContigua = tamMenor * (valorP / 100.0);
        
    for (icont = 0; codGenetico1[icont] != '0' && parentes == FALSE; icont++){
      for (jcont = 0; codGenetico2[jcont] != '0' && parentes == FALSE; jcont++){
        if (codGenetico1[icont] == codGenetico2[jcont]){
          kcont = icont + 1;
          lcont = jcont + 1;
          
          while (parteContigua < tamMaior){
            if (codGenetico1[kcont] == '0')
              kcont = 0;
            if (codGenetico2[lcont] == '0')
              lcont = 0;
            if (codGenetico1[kcont] != codGenetico2[lcont])
              break;
            else {
              parteContigua++;
              kcont++;
              lcont++;
            }
          }
          
          if (parteContigua >= minContigua)
            parentes = TRUE;
          parteContigua = 1;
        }
      }
    }
    
    if (parentes)
      printf("Eles são parentes!\n");
    else
      printf("Eles não são parentes.\n");
    
    return 0;
}