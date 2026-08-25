#include <stdio.h>
#define maxTam 10

int main() {
    int icont, somaChefe, tam, listaChefe[maxTam];
    somaChefe = 0;
    
    icont = 0;
    scanf("%i", &listaChefe[icont]);
    
    while (listaChefe[icont] >= 0){
      if (listaChefe[icont] > 0)
        icont++;
      else if (listaChefe[icont] == 0 && icont > 0)
        icont--;
      
      scanf("%i", &listaChefe[icont]);
    }
    
    tam = icont;
    for (icont = 0; icont < tam; icont++)
      somaChefe += listaChefe[icont];
    printf("\n\nsoma das receitas: %i", somaChefe);
    
    return 0;
}